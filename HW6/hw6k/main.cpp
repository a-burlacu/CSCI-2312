#include <iostream>
#include <string>
#include "Customer.h"

int main () {
    Customer *list[3] ;
    list[0] = new Customer("John Dough", 20);

    list[1] = new Customer("Bob Dough", 100);

    list[2] = new Premium_Customer("Jane Doe", 100, 20);

    for(int i=0; i<3; i++) {

        list[i]->print();

    }

    // remember to deallocate the memory allocation for customers
delete *list;//double check this
    return 0;

}
