#include <iostream>
#include <vector>
using namespace std;
class animal
{
private:
public:
    virtual void makeSound() const
    {
        cout << "haaaaaaa" << endl;
    }
};
class dog : public animal
{
private:
public:
    void makeSound() const override
    {
        cout << "woooof" << endl;
    }
};
class cat : public animal
{

private:
public:
    void makeSound() const override
    {
        cout << "miooooo" << endl;
    }
} 
int main()
{
    vector<animal *> zoo;
    animal* a=new dog();
    animal* b=new cat();
    animal* c=new animal();
    zoo.push_back(a);
    zoo.push_back(b);
    zoo.push_back(c);
    for(animal* g:zoo){
        g->makeSound();
    }
    return 0;
}