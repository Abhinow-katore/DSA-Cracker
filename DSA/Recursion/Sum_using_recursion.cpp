#include <iostream>
#include <stdio.h>
using namespace std;

int func(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return func(n / 10) + n % 10;
}

int main()
{

    int n;
    cin >> n;
    cout << func(n);
    return 0;
}