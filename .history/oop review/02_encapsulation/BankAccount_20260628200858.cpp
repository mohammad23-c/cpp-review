#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }
    BankAccount(int balance) : balance(balance) {}

    void deposit(int amount)
    {
        this->balance += amount;
    }
    void withdraw(int amount)
    {
        int balance=this->balance-amount;
        this->balance=
        this->balance -= amount;
    }
    int getBalance() const
    {
        return balance;
    }
};