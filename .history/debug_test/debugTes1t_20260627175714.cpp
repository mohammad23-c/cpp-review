#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    int sum = 0;

    for (int i = 0; i <= numbers.size(); i++)
    {
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;
}