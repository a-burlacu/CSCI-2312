// main.cpp  driver function
#include <iostream>
#include "Pizza.h"
using namespace std;


int main ()
{
    //create Pizza object, p
    Pizza p;

    //take user input for type, size, topping amount
    p.userInput();

   //Compute the pizza cost 
    p.computePrice();

    //print pizza text description
    p.outputDescription();
    
    return 0;
}