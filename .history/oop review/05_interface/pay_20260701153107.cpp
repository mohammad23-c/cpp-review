#include <iostream>
#include <vector>
using namespace std;

class BankAccount{
private:
public:

};
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
        cout << "pay with creditCard" << endl;
    }
};
class PayPal: public Ipayment
{

private:
public:
    void pay(int amount) override
    {
        cout << "pay with PayPal" << endl;
    }
};
class Cash: public Ipayment
{
private:
public:
void pay(int amount) override
    {
        cout << "pay with Cash" << endl;
    }
};