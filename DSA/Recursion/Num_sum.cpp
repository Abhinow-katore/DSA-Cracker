#include <iostream>
#include <stdio.h>
using namespace std;

int func(int x)
{
    if (x==0)
    {
        return 0;
    }
    return x + func(x-1);
}

void swap(int &x, int &y){

    int temp = x;
    x = y;
    y = temp;

}

int main()
{
    int x = 10;
    int y = 15;
    // cout<<func(x);
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}