#pragma once

#include <iostream>

const float PI=3.1415926535897932384626433832795028841971f;

bool getbit(unsigned char byte, int position);
float getScaledValue(int32_t rawValue, float lsbFactor);