#include <bits/stdc++.h>
#include <queue>
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

    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    // cout << "enter left"
    //      << "\n";
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << "\n";
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    // creating  Tree
    cout << "Enter the data"
         << "\n";
    root = buildTree(root);
    levelOrder(root);

    return 0;
}
// 1
// 3
// 7
// -1
// -1
// 11
// -1
// -1
// 5
// 17
// -1
// -1
// -1