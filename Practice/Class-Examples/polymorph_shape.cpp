//
//  main.cpp
//  polymorph_shape
//
//  Created by Madhuri Debnath on 4/11/22.
//

#include<iostream>
using namespace std;

class Shape
{
public:
    //virtual property is inherited from base to derived
   virtual void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
    void center()
    {
        cout << "Center the object" << endl;
        draw();
    }
};

class Triangle : public Shape
{
public:
    //using virtual is optional in derived classes
    virtual void draw()
    {
        cout << "Drawing a Triangle" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape s;
    s.center();
    
    Triangle t;
    t.center();
    
    Circle c;
    c.center();
    
}
