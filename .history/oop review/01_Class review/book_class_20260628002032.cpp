#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int price;
};
int main()
{
    Book b;
    bool resume = true;
    do
    {
        cout<<"enter title:"<<endl;
        cout<<"enter price:"<<endl;
        cout<<"enter author:"<<endl;

    } while (resume);

    return 0;
}