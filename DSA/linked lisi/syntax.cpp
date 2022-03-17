#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)   //constructor
    {
        data = x;
        next = NULL;
    }
}; 
//or
// struct Node {
//     int data;
//     struct Node* next;
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
// //     }
// // };
// void printlist(Node *head){
//     Node *curr = head;
//     while (curr!=NULL)
//     {

//         curr->data;
//         curr= curr->next;
//     }
    
// }

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printlist(head);

    return 0;
}
