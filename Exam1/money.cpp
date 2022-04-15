#include <iostream> 
using namespace std;

class Money
{
    public:
    //constructors 
    Money();
    Money(double dollars, double cents);

    //accessor functions- "get" 
    double getDollars();
    double getCents();
    
    //mutator functions- "set"
    void setDollars(double dollars);
    void setCents(double cents);

    //print function 
    void print();

    private:
    double dollars;
    double cents;
};

//print funciton definition
void Money::print()
{
    cout << "$" << dollars + cents << endl;
}
