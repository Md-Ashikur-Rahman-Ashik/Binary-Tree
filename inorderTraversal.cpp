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

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrder(root->leftPointer);
        cout << root->integerValue << " ";
        inOrder(root->rightPointer);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *secondNode = new Node(20);
    Node *thirdNode = new Node(30);
    Node *fourthNode = new Node(40);
    Node *fifthNode = new Node(50);
    Node *sixthNode = new Node(60);

    root->leftPointer = secondNode;
    secondNode->leftPointer = fourthNode;
    root->rightPointer = thirdNode;
    thirdNode->leftPointer = fifthNode;
    thirdNode->rightPointer = sixthNode;

    inOrder(root);

    return 0;
}