//
//  overaloading.h
//  overloading
//
//  Created by Madhuri Debnath on 3/15/22.
//

#ifndef overaloading_h
#define overaloading_h
class Money
{
public:
    Money();
    Money(int amount);
    Money(int d, int c);

    void setDollars(int d);
    void setCents(int c);

    int getDollars() const;
    int getCents() const;

    void print() const;
    //binary minus operator overloading function
    const Money operator -(const Money& m) const;
    const Money operator -() const;
    
    Money& operator =(const Money& anotherMoney);
    

private:
    int dollars;
    int cents;
};

const Money operator +(const Money& m1, const Money& m2);
bool operator >(const Money& m1, const Money& m2);

#endif /* overaloading_h */
