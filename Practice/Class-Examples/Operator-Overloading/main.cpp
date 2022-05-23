//
//  main.cpp
//  overloading
//
//  Created by Madhuri Debnath on 3/15/22.
//

#include <iostream>
#include "overaloading.h"

using namespace std;


int main() {
    // insert code here...
    Money m1(20,30), m2(10,80);
    Money m3 = m1 + m2;
    Money m4;
    m1.print();
    m2.print();
    m3.print();
    
    if( m1 > m2)
    {
        cout << "m1 is greater than m2" << endl;
    }
    
    //10 + 20 = 40;
    //int x = 10 + 20;
    
    m4 = m3 - m2;
    m4.print();
    
    Money m5 = -m4;
    cout << "Printing unary negate operator" << endl;
    m5.print();
    
    m5 = m3;
    
    
    //cout << "Hello, World!\n";
    return 0;
}


