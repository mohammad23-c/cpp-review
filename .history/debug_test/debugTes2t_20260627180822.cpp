#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {5, 10, 15, 20};

    int max = numbers[0];

    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] < max)
        {
            max = numbers[i];
        }
    }

    cout << "Max = " << max << endl;
}