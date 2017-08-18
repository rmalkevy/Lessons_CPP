//
// Created by Roman Malkevych on 8/18/17.
//

/*
 * Color
 */

std::vector<int> extractColorsRGB(int RGB)
{
	std::vector<int> color(3);
	color[0] = RGB >> 16; // get RED color
	color[1] = (RGB >> 8) - (color[0] << 8); // get GREEN color
	color[2] = RGB - (color[0] << 16) - (color[1] << 8);
	return ( color );
}

int getRGBcolor(int red, int green, int blue)
{
	return ((red << 16) | (green << 8) | blue);
}