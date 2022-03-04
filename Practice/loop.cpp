#include <iostream>
using namespace std;

int loopPractice()
{
    int num;
    int sum = 0;
    for (int i = 0; i<5; i++)
    {
        cout << "\nEnter a number to add, or 0 to exit: ";
        cin >> num;

        if (num==3)
        {
            continue;
        }
        else if (num==0)
        {
            break;
        }
        sum += num;
    }
    return (sum);
}


int main()
{
    int value = loopPractice();
    cout << "\nThe sum is: " << value << "\n"<< endl;

    return 0;
}

