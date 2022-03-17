#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }

};

int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    node1 ->next = node2;
    node2 -> next = node1;
    cout<<node1 -> data<<"\n";
    cout<<node2 -> data<<"\n";
    cout<<node1 -> next -> data <<"\n"; 
    return 0;
}