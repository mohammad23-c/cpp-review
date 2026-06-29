#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;
public:
    void deposit(int amount){
        this->balance+=amount;
    }
    void withraw(int amount){
        
    }
    int getBalance() const;
};