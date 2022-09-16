#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *first;
Node *last;

// Travesing/Printing nodes of linkedlist
void printnode()
{
    Node *curr = first;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

// Searching a node of linkedlist
void searchANode(int givenData)
{
    Node *curr = new Node();
    curr = first;

    // Traversing until we get the last node
    int index = 1;
    while (curr != NULL)
    {
        if (curr->data == givenData)
        {
            cout << curr->data << " is found in the list which is " << index << " node.";
        }
        index++;
        curr = curr->next;
    }
    cout<<"*************** Element not found in list *********** ";
}

int main()
{
    system("cls");
    Node *firstNode = new Node();
    firstNode->data = 10;
    firstNode->next = NULL;
    first = firstNode;

    Node *secondNode = new Node();
    secondNode->data = 20;
    secondNode->next = NULL;
    firstNode->next = secondNode;

    Node *thirdNode = new Node();
    thirdNode->data = 30;
    thirdNode->next = NULL;
    secondNode->next = thirdNode;

    Node *fourthNode = new Node();
    fourthNode->data = 40;
    thirdNode->next = fourthNode;
    fourthNode->next = NULL;
    last = fourthNode;

    cout << endl;
    searchANode(40);
    cout << endl;
    cout << "first node is : " << first->data << endl;
    cout << "last  node is : " << last->data << endl;

}