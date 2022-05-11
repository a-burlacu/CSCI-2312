#include <iostream>
using namespace std;

class Parent
{
public: 
    virtual void hello()
    {
        cout << "Hello I am Parent" << endl;
    }
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Hello I am Child" << endl;
    }
};


int main()
{
    Parent p;
    Child c;
    
    Parent *p1;
    p1 = new Child;
    p1 -> hello();  //prints "Hello I am Child"

    p.hello();  //prints "Hello I am Parent"
    c.hello(); //prints "Hello I am Child"
}