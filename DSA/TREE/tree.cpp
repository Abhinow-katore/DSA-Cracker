#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data"
         << "\n";
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "enter left"
         << "\n";
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
}

int main()
{
    Node *root = NULL;
    // creating  Tree
    root = buildTree(root);

    return 0;
}