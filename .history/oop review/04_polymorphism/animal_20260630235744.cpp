#include <iostream>
#include <vector>
using namespace std;

class animal
{
private:
public:
    virtual void makeSound() const=0;
    virtual ~animal()
    {
        cout << "animal deleted;" << endl;
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
    ~dog()
    {
        cout << "dog deleted;" << endl;
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
    ~cat()
    {
        cout << "cat deleted;" << endl;
    }
};

int main()
{
    vector<animal *> zoo;
    animal *a = new dog();
    animal *b = new cat();

    zoo.push_back(a);
    zoo.push_back(b);

    for (animal *g : zoo)
    {
        g->makeSound();
        delete g;
    }
    zoo.clear();

    return 0;
}