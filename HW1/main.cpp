//file: main.cpp

#include <iostream>
#include <string>
#include <fstream>
#include "convert.h"
using namespace std;

int main()
{
    double fahren, celsius;
    int value1 = 25;
    string city;
    ifstream infile("data.txt");

    if (!infile) {
        cout << "File not found\n";

    }

    while (getline(infile, city))
    {
        infile >> fahren;
        infile.ignore();
        //between stream operators and getline you must have a .ignore()
        celsius = fahrenToCel(fahren);
        cout << "The celsius temp in " << city << " is: " << celsius << endl;
    }
    return 0;
}
