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
        cout << "enter title:" << endl;
        cin.ignore();
        getline(cin,b.title);
        cout << "enter price:" << endl;
        cin>>b.price;
        cout << "enter author:" << endl;
        cin.

    } while (resume);

    return 0;
}