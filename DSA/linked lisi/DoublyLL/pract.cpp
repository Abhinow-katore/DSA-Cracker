#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = prev;
    }
};

void print(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int length(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    // cout << len << "\n";
    return len;
}

void insertAt(Node *&head, int d, int position)
{
    if (position==1)
    {
        Node*temp1 = new Node(d);
        temp1 ->next = head;
        head ->prev = temp1;
        head = temp1;
        return;
    }
    
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;

    // curr->next = temp;
    temp->next =nodeToInsert;
    nodeToInsert ->prev = temp;
    
}


void deletion(Node *&head, int position)
{
    Node *curr = head;
    if (position == 1)
    {
        head = head->next;
        curr->next = NULL;
        head->prev = NULL;
        return;
    }
    
    
    

    Node *temp = head;
    
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        // temp ->prev =NULL;
        
        // temp ->prev ->next =NULL;
        
        cout<<"bola tha mene";
    }
    
    Node *sus = temp->next->next;
    temp ->next = temp->next->next;
    sus ->prev->prev= temp;
    
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(100);
    Node *head = node1;
    node1->next = node2;
    print(head);
    cout << "\n";

    node2->next = node3;
    print(head);
    cout << "\n";

    insertAt(head,99,3);
    print(head);
    cout << "\n";

    // insertAt(head,99,5);
    deletion(head,1);

    print(head);
    cout << "\n";
    length(head);

    return 0;
}