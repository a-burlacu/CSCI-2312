#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 5; // throw an int exception
	}
	catch (double x)
	{
		cout << "We caught an exception of type double: " << x << '\n';
	}
	catch (...) // catch-all handler
	{
		cout << "We caught an exception of an undetermined type\n";
	}
return 0;
}