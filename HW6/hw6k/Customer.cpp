//
// Created by Karla Vela on 4/21/22.
//

#include <iostream>
#include<string>
#include "Customer.h"

using namespace std;

//Customer fx def

Customer::Customer() {

}

Customer::Customer(string newName, int newNumcalls) {
    name=newName;
    numcalls= newNumcalls;
}

int Customer::getNumcalls() {
    return numcalls;
}

string Customer::getName() {
    return name;
}

string Customer::setName(string newName) {
    name= newName;
}

int Customer::setNumcalls(int newNumcalls) {
    numcalls= newNumcalls;
}

double Customer::getMonthfee(){
    monthfee=10.00;
    percall=.50;
}

double Customer::computebill() {
    getMonthfee();
    bill = monthfee + (percall * numcalls);
    return bill;
}

void Customer::print() {
    computebill();
    cout<<name << " your bill total is: $"<< bill<<"\n";
}

//Premium Customer

Premium_Customer::Premium_Customer():Customer() {

}

Premium_Customer::Premium_Customer(string newName, int newNumcalls, int newNummin): Customer(newName, newNumcalls) {
     nummin= newNummin;
}

double Premium_Customer::getMonthfee() {
    monthfee=20.00;
    percall=.05;
    permin= .10;
}
double Premium_Customer::computebill() {
    Premium_Customer::getMonthfee();
    bill= Customer::computebill();
    bill= bill + (permin *nummin);
    return bill;
}


