// C++ program for selection sort of array
#include <iostream>
using namespace std;

/* 
n = size of array/number of elements 
small = smallest element index
i = leftmost element index 
j = loop control variable
*/
void selectionSort(int array[], int n);

int main ()
{
    int array[10], n = 10, i;

    cout << "Enter 10 integers: ";  //Ask user for array values

    for(i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    selectionSort(array,n);

    cout << "Array from smallest to largest: "; //Print array after sorting

    for(i=0; i<10;i++)
    {
        cout << array[i] <<" "<< endl;
    }

    return 0;
}


void selectionSort(int array[], int n)
{
    int i, j, small, temp;
    
    for(i=0 ; i < n-1 ; i++)
    {
        small = i;

        for (j=i+1 ; j < n ; j++)
        {
            if(array[j] < array[small])
            {
                small = j;
            }

        }        
        temp = array[i];
        array[i] = array[small];
        array [small] = temp;
    }
}