#include <iostream>
#include <vector>
using namespace std;

class Ipayment
{
private:
public:
    virtual void pay(int amount) = 0;
};

class CreditCard:public Ipayment
{
private:
public:
    void pay(int amount) override{
        cout<<"pay with creditCard"<<endl;
    }
};
class PayPal
{

private:
public:
};
class Cash
{
private:
public:
};