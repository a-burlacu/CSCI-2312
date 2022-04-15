#include <iostream>
using namespace std;



class DayOfYear
{
public:
    void input();
    void outpu();
    void set(int newMonth, int newDay);

private:
    int month;
    int day;
};


DayOfYear today; // OK

today.month = 12; //ILLEGAL

today.day = 25; //ILLEGAL

cout << today.month; //ILLEGAL

cout << today.day; //ILLEGAL

if(today.month == 1)  //ILLEGAL
{
    cout << "January"
}


