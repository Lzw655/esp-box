// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: chat_gpt

#include "../ui.h"

void ui_ScreenSetup_screen_init(void)
{
    ui_ScreenSetup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenSetup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_ScreenSetup, &ui_img_setup_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageSetupTextBg = lv_img_create(ui_ScreenSetup);
    lv_img_set_src(ui_ImageSetupTextBg, &ui_img_setup_text_bg_png);
    lv_obj_set_width(ui_ImageSetupTextBg, 320);
    lv_obj_set_height(ui_ImageSetupTextBg, 240);
    lv_obj_set_align(ui_ImageSetupTextBg, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageSetupTextBg, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageSetupTextBg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_ImageSetupTextBg, 560);

    ui_PanelSetupWifi = lv_obj_create(ui_ScreenSetup);
    lv_obj_set_width(ui_PanelSetupWifi, 320);
    lv_obj_set_height(ui_PanelSetupWifi, 240);
    lv_obj_add_flag(ui_PanelSetupWifi, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_PanelSetupWifi, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelSetupWifi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_width(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_PanelSetupWifi, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LabelSetupWifi = lv_label_create(ui_PanelSetupWifi);
    lv_obj_set_width(ui_LabelSetupWifi, LV_SIZE_CONTENT);   /// 88
    lv_obj_set_height(ui_LabelSetupWifi, LV_SIZE_CONTENT);    /// 10
    lv_obj_set_align(ui_LabelSetupWifi, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSetupWifi, "Connecting to Wi-Fi\n");
    lv_obj_set_style_text_color(ui_LabelSetupWifi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSetupWifi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelSetupWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_LabelSetupWifi, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelSetupWifi, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSetupWifi, &ui_font_PingFangEN20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelSetupSteps = lv_obj_create(ui_ScreenSetup);
    lv_obj_set_width(ui_PanelSetupSteps, 320);
    lv_obj_set_height(ui_PanelSetupSteps, 240);
    lv_obj_set_x(ui_PanelSetupSteps, -1);
    lv_obj_set_y(ui_PanelSetupSteps, 0);
    lv_obj_clear_flag(ui_PanelSetupSteps, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelSetupSteps, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelSetupSteps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_width(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_PanelSetupSteps, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LabelSetupStepContent = lv_label_create(ui_PanelSetupSteps);
    lv_obj_set_width(ui_LabelSetupStepContent, lv_pct(88));
    lv_obj_set_height(ui_LabelSetupStepContent, lv_pct(73));
    lv_obj_set_x(ui_LabelSetupStepContent, lv_pct(0));
    lv_obj_set_y(ui_LabelSetupStepContent, lv_pct(20));
    lv_obj_set_align(ui_LabelSetupStepContent, LV_ALIGN_TOP_MID);
#if CONFIG_BSP_BOARD_ESP32_S3_BOX
    lv_label_set_text(ui_LabelSetupStepContent,
                      "1. Wake up the device using \"Hi ESP\".\n2. Ask a question within 10 seconds and wait for a reply.\n3.  In sleep mode, click screen can wake up the device. ");
    lv_obj_set_style_text_line_space(ui_LabelSetupStepContent, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
#else
    lv_label_set_text(ui_LabelSetupStepContent,
                      "1. Wake up the device using \"Hi ESP\".\n2. Ask a question within 10 seconds and wait for a reply.\n3. In sleep mode, click \"Enter\" button can wake up the device.\n4. Long press \"Enter\" button to enter/exit Settings.");
    lv_obj_set_style_text_line_space(ui_LabelSetupStepContent, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
#endif
    lv_obj_set_style_text_color(ui_LabelSetupStepContent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSetupStepContent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelSetupStepContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSetupStepContent, &ui_font_PingFangEN14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelSetupStepTile = lv_label_create(ui_PanelSetupSteps);
    lv_obj_set_width(ui_LabelSetupStepTile, 230);
    lv_obj_set_height(ui_LabelSetupStepTile, LV_SIZE_CONTENT);    /// 140
    lv_obj_set_x(ui_LabelSetupStepTile, 45);
    lv_obj_set_y(ui_LabelSetupStepTile, 15);
    lv_label_set_text(ui_LabelSetupStepTile, "Steps");
    lv_obj_set_style_text_color(ui_LabelSetupStepTile, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSetupStepTile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelSetupStepTile, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSetupStepTile, &ui_font_PingFangEN20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonSetup = lv_btn_create(ui_PanelSetupSteps);
    lv_obj_set_width(ui_ButtonSetup, 72);
    lv_obj_set_height(ui_ButtonSetup, 24);
    lv_obj_set_x(ui_ButtonSetup, 0);
    lv_obj_set_y(ui_ButtonSetup, -20);
    lv_obj_set_align(ui_ButtonSetup, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_ButtonSetup, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonSetup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ButtonSetup, 17, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonSetup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonSetup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelSetupBtn = lv_label_create(ui_ButtonSetup);
    lv_obj_set_width(ui_LabelSetupBtn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSetupBtn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelSetupBtn, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSetupBtn, "OK");
    lv_obj_set_style_text_color(ui_LabelSetupBtn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSetupBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelSetupBtn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSetupBtn, &ui_font_PingFangEN16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonSetup, ui_event_ButtonSetup, LV_EVENT_ALL, NULL);
}
