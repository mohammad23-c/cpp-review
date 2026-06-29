#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;
public:
    void deposit(int amount);
    void withraw(int n);
    int getBalance() const;
};