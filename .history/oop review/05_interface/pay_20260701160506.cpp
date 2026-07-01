#include <iostream>
#include <vector>
#include <memory>
using namespace std;


class Ipayment
{
private:
public:
    virtual void pay(int amount) = 0;
    virtual ~Ipayment()
    {
        cout << "Ipayment deleted" << endl;
    }
};

class CreditCard : public Ipayment
{
private:
public:
    void pay(int amount) override
    {
        cout << "pay with creditCard    " << amount << endl;
    }
};

class PayPal : public Ipayment
{

private:
public:
    void pay(int amount) override
    {
        cout << "pay with PayPal    " << amount << endl;
    }
};

class Cash : public Ipayment
{
private:
public:
    void pay(int amount) override
    {
        cout << "pay with Cash  " << amount << endl;
    }
};

int main()
{
    unique_ptr<Ipayment> p1=make_unique<PayPal>();
    unique_ptr<Ipayment> p2=make_unique<Cash>();
    
    for (Ipayment *p : pays)
    {
        p->pay(100);
    }
    for (Ipayment *p : pays)
    {
        delete p;
    }
    pays.clear();
    return 0;
}