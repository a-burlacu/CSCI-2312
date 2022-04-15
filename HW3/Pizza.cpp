// pizza.cpp  Pizza class methods
#include <iostream>
#include "Pizza.h"

using namespace std;

//function definitions 

int Pizza::getType()
{
    return pizzaType;
}
int Pizza::getSize()
{
    return pizzaSize;
}
void Pizza::setType(int type)
{
    pizzaType = type;
}
void Pizza::setSize(int size)
{
    pizzaSize = size;
}

void Pizza::userInput()
{
    cout << "What type of pizza would you like?"<<endl;
    cout << "Enter [1] for Deep dish\nEnter [2] for Hand tossed\nEnter [3] for pan" <<endl;
    cin >> pizzaType; 

    cout << "What size pizza would you like?"<<endl;
    cout << "Enter [1] for Small\nEnter [2] for Medium\nEnter [3] for Large"<<endl;
    cin >> pizzaSize;

    cout << "How many toppings would you like?\nEnter a number from [0-5]: "<<endl;
    cin >> pizzaToppings;
}
void Pizza::outputDescription()
{
    cout << "You ordered a ";
    switch (pizzaSize)
    {
        case 1:
            cout <<"Small";
            break;
        case 2:
            cout <<"Medium";
            break;
        case 3:
            cout <<"Large";
            break;
    }
    switch (pizzaType)
    {
        case 1:
            cout <<" Deep Dish";
            break;
        case 2:
            cout <<" Hand Tossed";
            break;
        case 3:
            cout <<" Pan";
            break;
    }
    cout << " pizza with "<< pizzaToppings <<" Toppings."<<endl;
    cout << "The cost of this pizza is $"<< pizzaCost <<endl;
}

double Pizza::computePrice()
{
    switch (pizzaSize)
    {
        case 1:
            pizzaCost = 10.00;
            break;
        case 2:
            pizzaCost = 14.00;
            break;
        case 3:
            pizzaCost = 17.00;
            break;
    }

    if (pizzaToppings == 0)
    {
        pizzaCost = pizzaCost;
    }
    else
    {
        pizzaCost += 2*pizzaToppings;
    }
    return pizzaCost;
}