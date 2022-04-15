#include <iostream>
using namespace std;

void input(int& x, int& y);

int main()
{
    int var1 = 10, var2 = 20;
    
    input(var1, var2);
    cout << "\n the value of the variables are";
    cout << " " << var1 << "," << var2 << "\n" << endl;

    return 0;
}

void input(int& x, int& y)
{
    cout << "\n enter values for x, y: ";
    cin >> x >> y; 
}

