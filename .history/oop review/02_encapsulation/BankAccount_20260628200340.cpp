#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount(int balance):this{}
    void deposit(int amount)
    {
        this->balance += amount;
    }
    void withraw(int amount)
    {
        this->balance -= amount;
    }
    int getBalance() const
    {
        return balance;
    }
};