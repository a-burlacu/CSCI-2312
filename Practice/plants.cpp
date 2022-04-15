#include <iostream>
using namespace std;

int main()
{
    int total, temperature, percentage_calculated, starting_amount; // these are our integers

    cout << "Enter the number of plants available today: ";
    cin >> total;

    starting_amount = total;

    for (int i = 0; i < 7; i++) // iterate over 7 since there will be 7 inputs
    {
        cout << "Enter a temperature: "; // The user will input the temperature here
        cin >> temperature;

        // if statements
        if (temperature < 40)
        {
            percentage_calculated = 10;
        }
        else if (temperature < 60)
        {
            percentage_calculated = 30;
        }
        else if (temperature < 70)
        {
            percentage_calculated = 50;
        }
        else if (temperature < 80)
        {
            percentage_calculated = 60;
        }
        else if (temperature >= 80)
        {
            percentage_calculated = 40;
        }

        /*
        The following math will take the place from total and
        multiply by percentage_calculated and divide by 100
        */

        total -= total * (percentage_calculated / 100.0);
    }

    cout << "The total estimated sale is " << (starting_amount - total) << " plants" << endl;

    return 0;
}