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
    
    cout << "author: " << b2.author << ", price: " << b2.price << ", title: " << b2.title << endl;

    return 0;
}