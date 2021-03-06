// -alpha_dither yes -dither 2 -non_opaque_image_format ARGB8888 -opaque_image_format RGB565 0x8e15e731
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern const unsigned char _blue_buttons_round_edge_small[];
extern const unsigned char _blue_buttons_round_edge_small_pressed[];
extern const unsigned char _blue_check_buttons_check_round_mark_active[];
extern const unsigned char _blue_check_buttons_check_round_mark_inactive[];
extern const unsigned char _blue_check_buttons_check_round_mark_normal[];
extern const unsigned char _blue_check_buttons_check_round_mark_pressed[];
extern const unsigned char _blue_icons_go_next_48[];
extern const unsigned char _blue_progressindicators_bg_medium_circle_indicator_bg_line_full[];
extern const unsigned char _blue_slider_horizontal_medium_indicators_slider_square_nob[];
extern const unsigned char _blue_slider_horizontal_medium_slider_round_edge_fill[];
extern const unsigned char _blue_slider_horizontal_medium_slider_square_fill[];
extern const unsigned char _blue_slider_vertical_small_indicators_slider3_vertical_round_nob[];
extern const unsigned char _blue_slider_vertical_small_slider3_vertical_round_back[];
extern const unsigned char _blue_slider_vertical_small_slider3_vertical_round_fill[];
extern const unsigned char _blue_togglebars_toggle_round_large_button_off[];
extern const unsigned char _blue_togglebars_toggle_round_large_button_on[];
extern const unsigned char _dark_backgrounds_main_bg_texture_480x272px[];

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, 50, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, 50, touchgfx::Bitmap::ARGB8888 },
    { _blue_check_buttons_check_round_mark_active, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 },
    { _blue_check_buttons_check_round_mark_inactive, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 },
    { _blue_check_buttons_check_round_mark_normal, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 },
    { _blue_check_buttons_check_round_mark_pressed, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 },
    { _blue_icons_go_next_48, 0, 46, 44, 34, 3, 12, 38, touchgfx::Bitmap::ARGB8888 },
    { _blue_progressindicators_bg_medium_circle_indicator_bg_line_full, 0, 104, 104, 85, 28, 13, 48, touchgfx::Bitmap::ARGB8888 },
    { _blue_slider_horizontal_medium_indicators_slider_square_nob, 0, 48, 48, 2, 1, 44, 44, touchgfx::Bitmap::ARGB8888 },
    { _blue_slider_horizontal_medium_slider_round_edge_fill, 0, 352, 15, 3, 1, 346, 12, touchgfx::Bitmap::ARGB8888 },
    { _blue_slider_horizontal_medium_slider_square_fill, 0, 352, 15, 1, 1, 350, 12, touchgfx::Bitmap::ARGB8888 },
    { _blue_slider_vertical_small_indicators_slider3_vertical_round_nob, 0, 34, 54, 5, 7, 24, 38, touchgfx::Bitmap::ARGB8888 },
    { _blue_slider_vertical_small_slider3_vertical_round_back, 0, 20, 172, 0, 10, 20, 152, touchgfx::Bitmap::ARGB8888 },
    { _blue_slider_vertical_small_slider3_vertical_round_fill, 0, 20, 172, 0, 10, 20, 152, touchgfx::Bitmap::ARGB8888 },
    { _blue_togglebars_toggle_round_large_button_off, 0, 128, 38, 13, 1, 102, 36, touchgfx::Bitmap::ARGB8888 },
    { _blue_togglebars_toggle_round_large_button_on, 0, 128, 38, 13, 1, 102, 36, touchgfx::Bitmap::ARGB8888 },
    { _dark_backgrounds_main_bg_texture_480x272px, 0, 480, 272, 0, 0, 480, 272, touchgfx::Bitmap::RGB565 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}

