#include <iostream>
#include <vector>
using namespace std;

class Ipayment
{
private:
public:
    virtual void pay(int amount) = 0;
};

class CreditCard:
{
private:
public:
    void pay(int amount) override{

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