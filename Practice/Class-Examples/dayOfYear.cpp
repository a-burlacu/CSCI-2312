//
//  main.cpp
//  spring2022_1
//
//  Created by Madhuri Debnath on 2/22/22.
//

#include <iostream>
using namespace std;

class DayOfYear
{
public:
    //accessor function
    //also known as get function
    int getDay();
    int getMonth();
    
    //mutator function
    //also known as set function
    void setDay(int newDay);
    void setMonth(int newMonth);
    
    //print the output
    void print();
    
    
private:
    int day;
    int month;
};

int DayOfYear::getDay()
{
    return day;
}

int DayOfYear::getMonth()
{
    return month;
}

void DayOfYear::setDay(int newDay)
{
    day = newDay;
}

void DayOfYear::setMonth(int newMonth)
{
    month = newMonth;
}

void DayOfYear::print()
{
    cout << day << " " << month << endl;
}


int main()
{
    DayOfYear today, tomorrow;
    today.setDay(15);
    today.setMonth(5);
    
    tomorrow.setDay(today.getDay()+1);
    tomorrow.setMonth(today.getMonth());
    
    //cout << today.getDay() << " " << today.getMonth() << endl;
    
    today.print();
    tomorrow.print();
    return 0;
}
