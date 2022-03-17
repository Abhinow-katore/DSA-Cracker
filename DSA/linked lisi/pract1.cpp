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

int insert(Node *&head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}
int print(Node *&head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
        count++;
        cout<<"count:"<<count<<" ";
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    // cout<<node1 -> data << "\n";
    // cout<< node1 ->next;
    insert(head, 11);
    insert(head, 5);
    print(head);

    return 0;
}