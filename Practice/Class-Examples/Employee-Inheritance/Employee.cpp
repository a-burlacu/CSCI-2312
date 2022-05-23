//
//  Employee.cpp
//  inheritance
//
//  Created by Madhuri Debnath on 3/30/22.
//
#include<iostream>
#include "Employee.h"
using namespace std;

void Emp::setname(string _n)
{
    name = _n;
}
void Emp::setssn(int s)
{
    ssn = s;
}
void Emp::setPay(int p)
{
    pay = p;
}
int Emp::getssn() const 
{
    return ssn;
}
string Emp::getname() const
{
    return name;
}
int Emp::getpay() const
{
    return pay;
}
void Emp::print() const
{
    cout << "name: " << name << endl;
    cout << "ssn: " << ssn << endl;
    cout << "pay:" << pay << endl;
}

SalariedEmp::SalariedEmp():Emp(),salary(0){}
SalariedEmp::SalariedEmp(std::string n, int s, int p, int sa):Emp(n,s,p),salary(sa){}

void SalariedEmp::setsalary(int s)
{
    salary = s;
}

int SalariedEmp::getsalary() const
{
    return salary;
}

void SalariedEmp::print() const
{
    Emp::print();
    cout << "salary: " << salary << endl;
}
