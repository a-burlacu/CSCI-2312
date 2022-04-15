/*
"add" function of Fraction class takes an object of Fraction type and adds the fraction with the calling object, 
For example:
Fraction f1(2,4), f2(1,4);
calling "f1.add(f2)" function would return the summation of 2/4 + 1/4 as a double which is 0.75

Write the definition of add function of Fraction class


"multiply" function of Fraction class takes an object of Fraction type and multiply the fraction with the calling object. For example, 

Fraction f1(2,4), f2(1,4);

calling "f1.multiply(f2)" function would return the summation of 2/4 * 1/4 as double, which is  0.375.

Write the definition of "multiply" function of Fraction class.
*/
#include <iostream>
using namespace std;

class Fraction
{
    public:
    //constructors
    Fraction():numerator(0),denominator(1) {} //default constructor
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;

    }

    //accessor functions
    int getNumerator();
    int getDenominator();

    //mutator functions
    void setNumerator(int n);
    void setDenominator(int d);

    //print function prints the fraction in "num/denom" format
    void print();

    //add function takes an object of Fraction type
    //add with calling object
    //and return the result as a double value
    double add(Fraction f);

    //multiply function takes an object of Fraction type
    //multiply with calling object
    //and return the result as a double value
    double multiply(Fraction f);

    private:
    int numerator;
    int denominator;

};

//function definitions

void Fraction::print()
{
    cout << numerator << "/" << denominator << endl;
}

double Fraction::add(Fraction f)  //addition function
{
    double num = numerator * f.denominator + denominator * f.numerator;
    double den = denominator * f.denominator;

    return num/den; 
}

double Fraction::multiply(Fraction f) //multiplication function
{
    double num =numerator * f.numerator;
    double den = denominator * f.denominator;

    return num/den;
}



int main()  //driver function
{
   Fraction f1(2,4), f2(1,4);
   
   cout << f1.add(f2) << endl;
   cout <<f1.multiply(f2) << endl;

   f1.print();
   return 0;
}
