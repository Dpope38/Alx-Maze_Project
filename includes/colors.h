#ifndef _COLORS_H
#define _COLORS_H

/**
  5  * struct ColorRGBA - Typedef for a struct of type Vector
  6  * @red: The R value of the color
  7  * @green: The G value of the color
  8  * @blue: The B value of the color
  9  * @alpha: A value between 0.0 (fully transparent) and 1.0 (fully opaque)
 10  *
 11  * Description: A struct containing the RGBA values of a color.
 12  */

typedef struct ColorRGBA {
    float red;
    float green;
    float blue;
    float alpha;
} ColorRGBA;

ColorRGBA rgba_color_code(char *color);
ColorRGBA rgba_color_add(ColorRGBA color1, ColorRGBA color2);
void rgba_add(ColorRGBA *color, int n, float a);
ColorRGBA rgba_color_sub(ColorRGBA color1, ColorRGBA color2);
void rgba_sub(ColorRGBA *color, int n, float a);
ColorRGBA rgba_color_mul(ColorRGBA color1, ColorRGBA color2);
void rgba_mul(ColorRGBA *color, int n, float a);
ColorRGBA rgba_color_div(ColorRGBA color1, ColorRGBA color2);
void rgba_div(ColorRGBA *color, int n, float a);
int rgba_color_comp(ColorRGBA color1, ColorRGBA color2);
ColorRGBA color_wall(int wall_code, int side);
#endif