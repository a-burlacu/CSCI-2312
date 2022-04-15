#include <iostream>
using namespace std;

int main()
{
    const int i = 9;

    const int* p1 = &i; //data is const, pointer is not

    int* const p2; //pointer is const, data is not

    const int* const p3; //pointer and data is const

    int const *p4 = &i; 
    //same as:
    const int* p4 = &i; //data is const, pointer is not

//if const is on left of *, data is const
//if const is on right of *, pointer is const


    return 0;
}