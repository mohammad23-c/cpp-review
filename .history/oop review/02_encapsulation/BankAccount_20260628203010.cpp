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
        int new
        if()
    }
    int getBalance() const
    {
        return balance;
    }
};