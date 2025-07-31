#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *leftPointer;
    Node *rightPointer;

    Node(int integerValue)
    {
        this->integerValue = integerValue;
        this->leftPointer = NULL;
        this->rightPointer = NULL;
    }
};

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postOrderTraversal(root->leftPointer);
        postOrderTraversal(root->rightPointer);
        cout << root->integerValue << " ";
    }
}

int main()
{
    Node *root = new Node(10);
    Node *leftOfRoot = new Node(20);
    Node *rightOfRoot = new Node(30);
    Node *leftOfTwenty = new Node(40);
    Node *leftOfThirty = new Node(50);
    Node *rightOfThirty = new Node(60);

    root->leftPointer = leftOfRoot;
    root->rightPointer = rightOfRoot;
    leftOfRoot->leftPointer = leftOfTwenty;
    rightOfRoot->leftPointer = leftOfThirty;
    rightOfRoot->rightPointer = rightOfThirty;

    postOrderTraversal(root);

    return 0;
}