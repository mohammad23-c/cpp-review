#include <iostream>
#include <vector>
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
    unique_ptr<Ipayment> p1=
    Ipayment *p1 = new PayPal();
    Ipayment *p2 = new CreditCard();
    Ipayment *p3 = new Cash();

    vector<Ipayment *> pays;
    pays.push_back(p1);
    pays.push_back(p2);
    pays.push_back(p3);

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