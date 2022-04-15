#include <iostream>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    Date dueDate = {12,31,2004};

    cout << dueDate.month <<"/"<< dueDate.day <<"/"<< dueDate.year << endl;

    return 0;
}




//  cout << "Enter Full name: ";
//     cin.get(p1.name, 50);
//     cout << "Enter age: ";
//     cin >> p1.age;
//     cout << "Enter salary: ";
//     cin >> p1.salary;

//     cout << "\nDisplaying Information." << endl;
//     cout << "Name: " << p1.name << endl;
//     cout <<"Age: " << p1.age << endl;
//     cout << "Salary: " << p1.salary;