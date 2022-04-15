#include <iostream>
using namespace std;

class Wall   //Default Example
{
    private: 
        int x;
        int y;

    public:

        Wall(){}     //Default Constructor with no initial values (ok!)
        Wall()       //Default Constructor with initialized values (also ok!)
        {
            x = 2;
            y = 4;
        }
        Wall(): x(2), y(4) {}  //Alternate format for previous example (also ok!)

};


class Wall   //Parameterized Example
{
    private: 
        int x;
        int y;

    public:
        
        //Parameterized constructor to obtain values of x and y, taken as arguments length and height 

        Wall(int length, int height) 
        {
            x = length;
            y = height;
        }
};


class Wall    //Copy Example
{
    private: 
        int length;
        int height;

    public:
        Wall(int len, int hgt) 
        {
            len = length;
            hgt = height;
        }

        Wall(Wall &obj)  //Copy constructor takes the address of an object of Wall class as argument
        {
            length = obj.length;
            height = obj.height;
        }

    //use example, wall2 object will have the same values as wall1 object

    Wall wall1(3,5);   //uses param constructor to get len = 3, hgt = 5

    Wall wall2 = wall1;
    };