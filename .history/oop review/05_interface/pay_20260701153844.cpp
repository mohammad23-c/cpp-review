#include <iostream>
#include <vector>
using namespace std;

class Ipayment
{
private:
public:
    virtual void pay(int amount) = 0;
};

class CreditCard : public Ipayment
{
private:
public:
    void pay(int amount) override
    {
        cout << "pay with creditCard" << amount << endl;
    }
};

class PayPal : public Ipayment
{

private:
public:
    void pay(int amount) override
    {
        cout << "pay with PayPal" << amount << endl;
    }
};

class Cash : public Ipayment
{
private:
public:
    void pay(int amount) override
    {
        cout << "pay with Cash" << amount << endl;
    }
};

int main(){
    Ipayment* p1;
    Ipayment* p2;
    Ipayment* p3;
    Ipayment* p4;


    return 0;
}