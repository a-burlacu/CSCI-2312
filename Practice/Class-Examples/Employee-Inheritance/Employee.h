//
//  Header.h
//  inheritance
//
//  Created by Madhuri Debnath on 3/30/22.
//

#ifndef Header_h
#define Header_h
class Emp
{
protected:
    std::string name;
    int ssn;
    int pay;
public:
    //constructors
    Emp():name(""),ssn(0),pay(0){}
    Emp(std::string n, int s, int p):name(n),ssn(s), pay(p){}
    void setname(std::string n);
    void setssn(int s);
    void setPay(int p);

    int getssn() const;
    std::string getname() const;
    int getpay() const;

    void print() const;
};

class SalariedEmp: public Emp
{
private:
    int salary;
public:
    SalariedEmp();
    SalariedEmp(std::string n, int s, int p, int sa);

    void setsalary(int s);
    int getsalary() const;

    //function overriding
    void print() const;
};









class HourlyEmp: public Emp
{
private:
    double rate;
public:
    HourlyEmp();
    HourlyEmp(std::string n, int s, int p, double r);
    
    double getRate() const;
    void setRate(double r);
    
    void print();
    
};


#endif /* Header_h */
