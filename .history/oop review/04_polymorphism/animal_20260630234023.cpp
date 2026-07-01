#include <iostream>
#include <vector>
using namespace std;

class animal
{
private:
    animal()
    {
        cout << "animal available" << endl;
    }

public:
    virtual void makeSound() const
    {
        cout << "haaaaaaa" << endl;
    }
    virtual ~animal()
    {
        cout << "animal deleted;" << endl;
    }
};

class dog : public animal
{
private:
    dog()
    {
        cout << "dog available" << endl;
    }

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
};

int main()
{
    vector<animal *> zoo;
    animal *a = new dog();
    animal *b = new cat();
    animal *c = new animal();

    zoo.push_back(a);
    zoo.push_back(b);
    zoo.push_back(c);
    for (animal *g : zoo)
    {
        g->makeSound();
    }

    return 0;
}