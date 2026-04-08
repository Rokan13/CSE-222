#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*  left;
    Node*  right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<< " ROOT :"<< root->data << endl;
    cout<< "Left Root :" << root->left->data<< " "<<root->left->left->data<<endl;
    cout<< "Right Root :" << root->right->data<< " "<<root->left->right->data<<endl;



}
