#include <iostream>
using namespace std;

// define struct data type
struct ShoeType
{
    char style;
    double price;
};

ShoeType discount (ShoeType oldRecord); //function prototype

int main ()
{
    ShoeType oldRecord;
    ShoeType newRecord;
    oldRecord.style = 'W';
    oldRecord.price = 34.50;

    discount(oldRecord);
    
    return 0;
}

ShoeType discount(ShoeType oldRecord) 
{
    double var = oldRecord.price * 0.1;
    // price reduced by 10%
    double newPrice = oldRecord.price - var;

    ShoeType newRecord; // define new struct variable
    newRecord.style = oldRecord.style;
    newRecord.price = newPrice;

    cout << newRecord.style << " " << newRecord.price << endl;

    return newRecord;
}

