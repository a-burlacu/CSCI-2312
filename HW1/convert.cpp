//file: convert.cpp

#include "convert.h"

double fahrenToCel(double fahren)
{
    double result = (fahren-32)*(5.0/9.0);
    return result;
}