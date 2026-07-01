#include <iostream>
using namespace std;
class animal
{
private:
public:
    virtual void makeSound() const{
        cout<<"haaaaaaa"<<endl;
    }
};
class dog : public animal
{
private:
public:
    void makeSound() const override
    {
    }
};
class cat:public animal
{

private:
public:
    void makeSound() const override{

    }
}

int
main()
{
    return 0;
}