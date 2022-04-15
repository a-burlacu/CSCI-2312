#include <iostream> 
using namespace std;

int average (int x, int y, int z);
int average (int x, int y);

void showVolume(int length, int width =1, int height =1);

int main()
{
	int x, y, z;
	cout << "Enter 2-3 variables, x, y, z: ";
	cin >> x >> y >> z;

	
	cout << "The average of the variables is " << average(x,y,z) << endl;
	
	showVolume(2,4,6); // All arguments given
	showVolume(3,5); // height defaults to 1
	showVolume(7); // width & height default to 1

	return 0;
}


int average(int x, int y, int z)
{
	return (x+y+z)/3;
} 

int average(int x, int y)
{
    return (x+y)/2;
}





