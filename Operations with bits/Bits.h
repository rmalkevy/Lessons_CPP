//
// Created by Roman Malkevych on 8/18/17.
//

#ifndef LESSONS_BITS_H
#define LESSONS_BITS_H

#include <iostream>
#include <vector>

int                 getRGBcolor(int red, int green, int blue);
std::vector<int>    extractColorsRGB(int RGB);
float               floatShiftRight(float num, int nShift);
int                 checkBitInNPosition(int num, int n);
int                 makeNBit1(int num, int n);
int                 makeNBit0(int num, int n);

#endif //LESSONS_BITS_H
