#include <iostream>
#include <stdio.h>
using namespace std;

int func(int x)
{
    if (x == 0)
    {
        return 0;
    }
    cout << x << " ";
    return func(x - 1);
}

int main()
{
    int x;
    cin >> x;
    func(x);
    return 0;
}