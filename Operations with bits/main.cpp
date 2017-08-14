//
// Created by Roman Malkevych on 8/14/17.
//

#include <iostream>
#include <vector>

std::vector<unsigned> extractColorsRGB(const unsigned long &RGB)
{
	std::vector<unsigned> color(3);
	color[0] = RGB >> 16; // get RED color
	color[1] = (RGB >> 8) - (color[0] << 8); // get GREEN color
	color[2] = RGB - (color[0] << 16) - (color[1] << 8);
	return ( color );
}


int main()
{
	// Check extractColorsRGB function
	auto colorRGB = extractColorsRGB(0xFFFF16);
	for (auto it : colorRGB)
	{
		std::cout << it << std::endl;
	}


	return ( 0 );
}