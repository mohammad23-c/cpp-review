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
} main()
{
    vector<animal *> zoo;
    animal* a=new dog();
    animal* b=new cat();
    animal* c=;

    return 0;
}