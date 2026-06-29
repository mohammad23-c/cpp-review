#include <iostream>
#include <vector>
using namespace std;

pair<string, int> addExpense()
{
    string name;
    int amount;
    cout << "name: " << endl;
    cin >> name;
    
    cout << "amount: " << endl;
    cin >> amount;
    return {name, amount};
}

void showExpense(const vector<pair<string, int>> &v)
{
    for (const pair<string, int> &p : v)
    {
        cout << p.first << "    " << p.second << endl;
    }
    return;
}
int showTotal(const vector<pair<string, int>> &v)
{
    int total = 0;
    for (const pair<string, int> &p : v)
    {
        total += p.second;
    }
    cout << "total expense is: " << total << endl;
    return total;
}
bool showMenu(vector<pair<string, int>> &vec)
{

    cout << "select one choice:" << endl;
    cout << "1-add expense" << endl;
    cout << "2-show expense" << endl;
    cout << "3-show total" << endl;
    cout << "4-Exit" << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        vec.push_back(addExpense());
        break;
    case 2:
        showExpense(vec);
        break;

    case 3:
        showTotal(vec);
        break;
    case 4:
        return false;
    default:
        cout << "invalid choice" << endl;
        return true;
    }
    return true;
}

int main()
{
    bool resume = true;
    vector<pair<string, int>> vec;
    do
    {
        resume = showMenu(vec);
    } while (resume);

    return 0;
}