//
// Created by Roman Malkevych on 8/18/17.
//

#include "Bits.h"

/*
 * float
 */

float    floatShiftRight(float num, int nShift)
{
	float a = (*(unsigned int*)&num >> nShift);
	return ( a );
}
