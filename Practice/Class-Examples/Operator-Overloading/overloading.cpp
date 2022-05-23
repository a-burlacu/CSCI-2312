//
//  overloading.cpp
//  overloading
//
//  Created by Madhuri Debnath on 3/15/22.
//

#include <iostream>
#include "overaloading.h"
using namespace std;

Money::Money():dollars(0),cents(0){}
Money::Money(int amount):dollars(amount),cents(0){}
Money::Money(int d, int c):dollars(d),cents(c){}

void Money::setDollars(int d)
{
    dollars = d;
}
void Money::setCents(int c)
{
    cents = c;
}

int Money::getDollars() const
{
    return dollars;
}
int Money::getCents() const
{
    return cents;
}

void Money::print() const
{
    cout << dollars << " dollars " << cents << " cents" << endl;
}
const Money Money::operator -(const Money& m) const
{
    int total1 = dollars*100 + cents;
    int total2 = m.dollars*100 + m.cents;
    //cout << total1 << " " << total2 << endl;
    int total3 = total1 - total2;
    int dollar = total3 / 100;
    int cents = total3 % 100;
    return Money(dollar, cents);
}

const Money Money::operator -() const
{
    return Money(-dollars, -cents);
}

Money& Money::operator =(const Money& anotherMoney)
{
    cout << "Calling an assingment operator" << endl;
    dollars = anotherMoney.dollars;
    cents = anotherMoney.cents;
    return *this;
    
}


const Money operator +(const Money& m1, const Money& m2)
{
    int total1 = m1.getDollars()*100 + m1.getCents();
    int total2 = m2.getDollars()*100 + m2.getCents();
    int total3 = total1 + total2;
    int dollar = total3 / 100;
    int cents = total3 % 100;
    return Money(dollar, cents);
}

bool operator >(const Money& m1, const Money& m2)
{
    int total1 = m1.getDollars()*100 + m1.getCents();
    int total2 = m2.getDollars()*100 + m2.getCents();
    return (total1 > total2);
}
