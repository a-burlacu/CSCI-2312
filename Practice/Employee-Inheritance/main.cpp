//
//  main.cpp
//  inheritance
//
//  Created by Madhuri Debnath on 3/30/22.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    // insert code here...
    Emp emp("Madhuri", 123456789, 1000);
    cout << "base class:" << endl;
    emp.print();
    
    SalariedEmp salEmp("Debnath", 123123123, 1000, 70000);
    cout << "Derived class:" << endl;
    salEmp.print();
    cout << "Calling print from parent class" << endl;
    salEmp.Emp::print();
    
    return 0;
}
