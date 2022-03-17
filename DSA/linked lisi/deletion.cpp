#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// void deletion(Node *&head, int position)
// {
//     // Node* temp = head;
//     // int count = 1;
//     Node *point = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         point = point->next;
//         cnt++;
//     }

//     point->next->next = point;
// }
void deletion(Node *&head, int position)
{
    Node *curr = head;
    if (position == 1)
    {
        head = head->next;
        curr->next = NULL;
        return;
    }
    

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    temp->next = temp->next->next;
}
int print(Node *&head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    Node *node6 = new Node(99);


    Node *head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;


    deletion(head, 5);
    node5->next = node6;

    print(head);

    return 0;
}