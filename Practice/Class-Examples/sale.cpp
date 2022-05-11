//
//  main.cpp
//  polymorph_shape
//
//  Created by Madhuri Debnath on 10/26/20.
//

#include <iostream>
using namespace std;

class Sale
{
protected:
    double price;
public:
    Sale():price(0){}
    Sale(double p):price(p){}
    double getPrice() const {return price;}
    virtual double bill() const {return price;}
    double savings(const Sale& other )
    {
        return this->bill() - other.bill();
    }

};

class DiscountSale: public Sale
{
private:
    double discount;
public:
    DiscountSale(double p, double d): Sale(p),discount(d){}
    double getDiscount() const
    {
        return discount;
    }
    double bill() const
    {
        double frac = discount / 100;
        return (1-frac)* getPrice();
    }
};


int main()
{
  
    Sale s1(100), s2(110);
    DiscountSale d1(110, 15);
    cout << "We save $"<< s2.savings(s1) << " if we buy s1 over s2" << endl;
    cout << d1.bill() << endl;
    cout << "We save $"<< s1.savings(d1) << " if we buy d1 over s1" << endl;
    return 0;
}
