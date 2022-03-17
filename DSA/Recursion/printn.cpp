#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    fun(n - 1);
    cout << n << "\n";
}

int main()
{
    int num = 5fac;
    fun(num);
    return 0;
}