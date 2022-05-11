//
// Created by Karla Vela on 4/21/22.
//
#include <iostream>
#include<string>

using namespace std;

class Customer {
protected:
    string name;
    double bill,monthfee,percall,permin;
    int numcalls, nummin;

public:
    Customer();
    Customer(string newName, int newNumcalls);

    //accessor fxs
    int getNumcalls();
    int getNummin();
    string getName();
    virtual double getMonthfee();


    //mutator fxs
    int setNumcalls(int newNumcalls);
    string setName(string newName);

    virtual double computebill();
    void print();
};

class Premium_Customer:public Customer{

public:
    Premium_Customer();
    Premium_Customer(string newName, int newNumcalls, int newNummin);
    double computebill();
    double getMonthfee();
};



#ifndef KARLAVELAHW6_CUSTOMER_H
#define KARLAVELAHW6_CUSTOMER_H

#endif //KARLAVELAHW6_CUSTOMER_H
