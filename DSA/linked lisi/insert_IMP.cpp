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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtMid(Node *&head, Node *&tail, int d, int position)
{
    if (position==1)
    {
        insertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int count = 1;
    while (count <position -1)
    {
        temp = temp ->next;
        count++;
    }
    if (temp->next ==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

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
    Node *head = node1;
    Node *tail = node1;
    Node *mid = node1;
    insertAtTail(tail, 60);
    insertAtHead(head, 50);
    insertAtTail(tail, 30);
    insertAtTail(tail, 20);
    insertAtTail(tail, 40);
    insertAtMid(head,tail,99,4 );
    print(head);
    cout<<"\n";
    cout<<"HEAD:"<<head->data<<"\n";
    cout<<"TAIL:"<<tail->data<<"\n";

    return 0;
}