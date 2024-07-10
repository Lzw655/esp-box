#!/bin/bash
# Copyright 2022 Espressif Systems (Shanghai) PTE LTD
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This script generates the launchpad config based on the application binaries
# present in the images/ directory
# Sample launchapd config: https://github.com/espressif/esp-launchpad/blob/main/config/config.toml
#
# This requires the merged binary names in a specific format
# <APP_NAME>_<Board_NAME>.bin
#
# Above mentioned binaries are generated by the ci

OUT_FILE=launchpad.toml
git_remote="$1"

cat <<EOF >> $OUT_FILE
esp_toml_version = 1.0
firmware_images_url = "$(echo $git_remote | sed 's|\(.*\)/\(.*\)|https://\1.github.io/\2/|')"

EOF

# APPS=($(ls | grep bin))
APPS=($(ls | grep bin | cut -d'.' -f1 | sort | uniq))

# Build supported applications list
SUPPORTED_APPS="supported_apps = ["
for app in "${APPS[@]}"
do
	SUPPORTED_APPS+="\"$app\","
done
SUPPORTED_APPS+="]"
# Remove the last comma
SUPPORTED_APPS=`echo $SUPPORTED_APPS | sed 's/\(.*\),/\1/'`

echo "$SUPPORTED_APPS" >> $OUT_FILE
echo "" >> $OUT_FILE

# build config for each app
for app in "${APPS[@]}"
do
	echo "[$app]" >> $OUT_FILE

    # Get the supported targets
    TARGETS=($(ls | grep "$app".bin | awk -F "_"$app".bin$" '{print $1}' | grep -v '_'))

    target=(esp32-p4)
    CHIPSETS="chipsets = ["
    tUP=`echo $target |  tr 'a-z' 'A-Z'`
    CHIPSETS+="\"$tUP\","
    image="image."$target" = \"$app.bin\""
    IMAGES+=("$image")
    CHIPSETS+="]"
    # remove last comma
    CHIPSETS=`echo $CHIPSETS | sed 's/\(.*\),/\1/'`

    echo $CHIPSETS >> $OUT_FILE

    for img in "${IMAGES[@]}"
    do
        echo $img >> $OUT_FILE
    done

    # TODO: Update the android phone app links when it is available on android play store
    echo "ios_app_url = \"\"" >> $OUT_FILE
    echo "android_app_url = \"\"" >> $OUT_FILE
    echo "" >> $OUT_FILE

    unset CHIPSETS IMAGES
done
