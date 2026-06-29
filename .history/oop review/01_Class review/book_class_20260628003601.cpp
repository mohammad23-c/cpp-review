#include <iostream>
#include <string>
#include <vector>
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
    bool resume = false;
    string answer;
    vector<Book> books;
    do
    {
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
        if (answer == "Y" || answer == "y")
        {
            resume = true;
        }
        else
        {
            resume = false;
        }
    } while (resume);

    for(Book book:books){
        
    }


    return 0;
}