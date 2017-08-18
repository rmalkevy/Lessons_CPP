//
// Created by Roman Malkevych on 8/14/17.
//

#include "Bits.h"

int main()
{
	// Check extractColorsRGB function
	auto colorRGB = extractColorsRGB(0xFFFF16);
	for (auto it : colorRGB)
	{
		std::cout << it << std::endl;
	}

	auto color = extractColorsRGB(getRGBcolor(255, 255, 22));
	for (auto it : color)
	{
		std::cout << it << std::endl;
	}

	std::cout << floatShiftRight(56.954, 1) << std::endl;


	// Algorithms



	return ( 0 );
}