#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(string name, int age) : name(name), age(age) {}

    virtual void showInfo() const
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
    }
};

class Student : public Person
{
private:
    int studentId;

public:
    Student(string name, int age, int studentId)
        : Person(name, age), studentId(studentId) {}
    void showInfo() const override
    {
        Person::showInfo();
        cout << "studentId  " << studentId << endl;
    }
};
int main()
{
    Person *p = new Student("mmd", 13, 12345678);
    p->showInfo();
    return 0;
}