//
// Created by Roman Malkevych on 8/18/17.
//

#include "Bits.h"

int     checkBitInNPosition(int num, int n)
{
	return ( num & (1 << n) );
}

int     makeNBit1(int num, int n)
{
	return ( num | (1 << n) );
}

int     makeNBit0(int num, int n)
{
	return ( num & (~(1 << n)));
}

int     switchBit(int num, int n)
{
	return (num ^ (1 << n));
}
