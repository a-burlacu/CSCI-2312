#include <iostream>
using namespace std;

class Student
{
public:
  int age;
  string name;  

};

int main()
{
    //create pointer of Student type
    Student* s;
    s = new Student; //creates a "blank" Student object that s points to
    // we will use *s to add values to the object's variables 

    //instead of using (*s).age = 12; and (*s).name = "Julie";

    s -> age = 12;
    s -> name ="Julie";

    //display the name and age values
    //s ->name will return "Julie" and s->age will return "12"
    cout << "Name,Age: " << s->name <<","<< s->age << endl; 

    return 0;
}