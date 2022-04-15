#include <iostream>
using namespace std;

class Dog
{
    private:
        int age;
        string name;

    public:
        //default constructor 
        Dog() {age = 3; name = "Max";} 

        //const parameter
        void setAge(int &a) {age = a; a++;}  //will return 10

        //can't modify a when it's const (remove a++)
        void setAge(const int &a) {age = a;    }//will return 9
        
        //const return value
        const string& getName() {return name;}

        //const function
        void printDogName() const {cout << name << endl;}
        
        int getAge() const {return age;}  //function must be const in order to be used with a const object
};

//function takes const object reference as parameter
void printDogAge(const Dog& d)
{
    cout << d.getAge() << endl;
}

int main()
{
    Dog d;
    int i = 9;
    d.setAge(i);
    cout <<"age = " << i << endl;

    const string& n = d.getName();
    cout << "name = " << n << endl;

    d.printDogName();

    printDogAge(d);

    return 0;
}