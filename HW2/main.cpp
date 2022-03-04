#include <iostream>
#include <cmath>
using namespace std;

void plantsSold
 (int arr[], int size, int num); // function prototype 

int main ()
{
    int plants, totalPlants, temp[7];
    cout << "How many plants does the store have?: ";
    cin >> plants ;
    
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter temperature for a day of the week: ";
        cin >> temp[i];
    }
    
    plantsSold(temp,7,plants);
 
    return 0;
}

void plantsSold (int arr[], int size, int num)
{
    int j, i, sum = 0 , rem = 0;
    for (i = 0, j = 0; i < size ; j++, i++)
    {
      if (j==0)
      {
        if (arr[i] >= 80)
        {
          sum = num*0.60;
        }
        else if (arr[i] >= 70 && arr[i] < 80)
        {
          sum = num*0.40;
        }
        else if (arr[i] >= 60 && arr[i] < 70)
        {
          sum = num*0.50;
        }
        else if (arr[i] >= 40 && arr[i] < 60)
        {
          sum = num*0.70;
        }
        else if (arr[i] < 40)
        {
          sum = num*0.90;
        }
        else
        {
          break;
        }
      }
        if (arr[i] >= 80)
        {
          rem = sum*0.60;
        }
        else if (arr[i] >= 70 && arr[i] < 80)
        {
          rem = sum*0.40;
        }
        else if (arr[i] >= 60 && arr[i] < 70)
        {
          rem = sum*0.50;
        }
        else if (arr[i] >= 40 && arr[i] < 60)
        {
          rem = sum*0.70;
        }
        else if (arr[i] < 40)
        {
          rem = sum*0.90;
        }
        else
        {
          break;
        }
    }
 cout << "The estimated plants sold is "<< num-rem << " plants."<< endl;
}