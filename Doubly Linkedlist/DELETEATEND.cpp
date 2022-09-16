#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *first;
Node *last;

void insertAtStart(int nodeData)
{
    if (first == NULL && last == NULL)
    {
        Node *curr = new Node();
        curr->data = nodeData;
        curr->prev = NULL;
        curr->next = NULL;
        first = curr;
        last = curr;
    }
    else
    {
        Node *curr = new Node();
        curr->data = nodeData;
        curr->next=NULL;
        curr->prev=last;
        last->next=curr;
        last=curr;
    }
}
void delteatstart()
{
    Node *curr = last;
    last->prev->next=NULL;
    last=last->prev;
    last->prev=NULL;
    delete curr;
}

void printNodes()
{
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    system("cls");
    insertAtStart(50);
    insertAtStart(40);
    insertAtStart(30);
    insertAtStart(20);
    insertAtStart(10);
cout<<"Before";
    printNodes();
    cout << endl;
cout<<"After";
    delteatstart();
    printNodes();
    cout << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data;
}