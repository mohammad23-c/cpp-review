#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Book
{
public:

    Book(){
        
    }
    Book(string title, string author, int price)
    {
        this->author = author;
        this->price = price;
        this->title = title;
    }
    string title;
    string author;
    int price;
};

int main()
{
    bool resume = false;
    char answer;
    vector<Book> books;
    do
    {
        Book b;
        cout << "enter title:" << endl;
        cin.ignore();
        getline(cin, b.title);
        cout << "enter price:" << endl;
        cin >> b.price;
        cout << "enter author:" << endl;
        cin.ignore();
        getline(cin, b.author);

        books.push_back(b);

        cout << "do you resume(Y/N)" << endl;
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            resume = true;
        }
        else
        {
            resume = false;
        }
    } while (resume);

    for (const Book &book : books)
    {
        cout << "author:" << book.author << endl;
        cout << "title:" << book.title << endl;
        cout << "price:" << book.price << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}