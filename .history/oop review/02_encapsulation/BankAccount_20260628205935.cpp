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
        int newBalance = this->balance - amount;
        if (newBalance >= 0)
            this->balance = newBalance;
        else
            cout << "Your account balance is insufficient\n";
    }
    int getBalance() const
    {
        return balance;
    }
};