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

int main()
{
    Node *root = new Node(10);
    Node *secondNode = new Node(20);
    Node *thirdNode = new Node(30);
    Node *fourthNode = new Node(40);
    Node *fifthNode = new Node(50);
    Node *sixthNode = new Node(60);

    root->leftPointer = secondNode;
    root->rightPointer = thirdNode;
    secondNode->leftPointer = fourthNode;
    thirdNode->leftPointer = fifthNode;
    thirdNode->rightPointer = sixthNode;

    return 0;
}