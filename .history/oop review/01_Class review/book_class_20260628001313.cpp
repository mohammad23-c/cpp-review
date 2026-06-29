#include <iostream>
#include <string>
using namespace std;
class book
{
public:
    string title;
    string author;
    int price;
};
int main(){
    book b1;
    book b2;
    b1.author="hadi";
    b1.price=1300;
    b1.title="cpp";

    b2.author="mmd";
    b2.price=4000;
    b2.title="python";

    cout<< b1.author <<  <<  <<  <<endl;
    cout<<  <<  <<  <<  <<endl;

    return 0;
}