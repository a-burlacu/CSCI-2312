#include <iostream>
using namespace std;
class A
{
    public:
    A(){}
    int getx() {return x;}
    private:
    int x = 1000;
};
int main()
{
    A w;
    cout << w.getx();
    return 0;
}