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
    Book b1;
    Book b2;
    b1.author = "hadi";
    b1.price = 1300;
    b1.title = "cpp";

    b2.author = "mmd";
    b2.price = 4000;
    b2.title = "python";

    cout << "author"<<b1.author << b1.price << b1.title << endl;
    cout << b2.author << b2.price << b2.title << endl;

    return 0;
}