#include <bits\stdc++.h>
#include <stdio.h>
using namespace std;
int passby(int *ptr){
    *ptr = 10;
}
void fun(int *p){
    *p = *p + 5;
}

int main(){
    int x = 10;
    int y = 20;
    int *ptr = &x;
    fun(&y);
    passby(ptr);
    cout<<y;
    cout<<*ptr;
    return 0;
}