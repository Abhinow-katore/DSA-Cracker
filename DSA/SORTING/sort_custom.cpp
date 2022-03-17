#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct point
{
    int x;
    int y;
};
bool myCom(point p1, point p2){
    return (p1.x<p2.x);
}
bool myCom1(point p1, point p2){
    return (p1.x<p2.x);
}

int main()
{
    int n = 6;
    point arr[] = {{3,10},{2,8},{5,4}};
    sort(arr,arr+n,myCom);///custom sort
    for(auto i:arr)
    cout<<i.x<<" "<<i.y<<"\n";

    return 0;
}