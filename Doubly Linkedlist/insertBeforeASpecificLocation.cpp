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
        curr->prev = NULL;
        curr->next = first;
        first->prev = curr;
        first = curr;
    }
}

void insertBeforeALocation(int nodeData, int location){
    Node* next = first;
    while(next != NULL){
        if(next->data == location){
            Node* curr = new Node();
            curr->data = nodeData;
            curr->next=next;
            next->prev->next=curr;
            curr->prev =next->prev;
            next->prev=curr;
                
        }
        next = next->next;
    }
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
    insertAtStart(60);
    insertAtStart(50);
    insertAtStart(30);
    insertAtStart(20);
    insertAtStart(10);

    cout<<"Before: "<<endl;
    printNodes();
    cout<<endl<<"After: "<<endl;
    insertBeforeALocation(40, 50);
    printNodes();
    cout << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data;
}