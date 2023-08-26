#include <iostream>
using namespace std;

void func(int n)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j << endl;
        }
    }
}

int main()
{
    func(2);
    return 0;
}

// Time Complexity = O(n^2)