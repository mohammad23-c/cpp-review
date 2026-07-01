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
    Ipayment* p1=new PayPal();
    Ipayment* p2=new CreditCard();
    Ipayment* p3=new Cash();

    vector<Ipayment*> pays;
    pays.push_back(p1);
    pays.push_back(p2);
    pays.push_back(p3);

    for(Ipayment* p:pays){
        p->pay()
    }
    for(Ipayment* p:pays){

    }
    return 0;
}