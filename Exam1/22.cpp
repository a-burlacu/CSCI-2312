#include <iostream>

int funcA(int param1, int&param2){
    int varA = 10;
    param1--;
    param2++;
    varA += param1;

    std::cout << param1 << " " << param2 << " " << varA << std::endl;

    return 1;
}

int main()
{
    int x =5;
    int y =50;
    funcA(x, y);
    x++; y++;
    funcA(x, y);
    return 0;
}