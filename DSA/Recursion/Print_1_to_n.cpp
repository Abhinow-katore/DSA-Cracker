#include <iostream>
#include <stdio.h>
using namespace std;

int func(int x,int k)
{
    if (x ==1 )
    {
        return 0;
    }
    cout << k << " ";
    return func(x - 1,k+1);
}

int main()
{
    int x;
    cin >> x;
    int k =1;
    func(x,k);
    return 0;
}