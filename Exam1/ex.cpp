#include <iostream>
using namespace std;


class Fraction
{

}


double Fraction::add(Fraction f)  //addition function
{
    double num = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
    double den = f1.denominator * f2.denominator;

    return num/den; 
}