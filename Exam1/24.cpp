#include <iostream>
#include <cstring>
using namespace std;

void Test1()
{
    char aStr[5] = "CSCI";
    int x = 12 %3, y =16/3;
    bool aBool = (x >=2 && y >=5);

    if (aStr[4] || x || aBool)
        cout << "Case 1" << endl;
    else if (aStr[3] && x)
        cout << "Case 2" <<endl;

    else if (aStr[2] && aBool)
        cout << "Case 3" << endl;
    else
        cout << "Case 4" << endl;

}

int main()
{
    Test1();

    return 0;
}