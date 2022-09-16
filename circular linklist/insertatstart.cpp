#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *first;
node *last;
// traversing in link list
void printnodes()
{
    node *curr = first;
    while (curr->next != first)
    {
        cout << curr->data << "-> ";
        curr = curr->next;
    }
    if (curr->next == first)
    {
        cout << curr->data << "-> ";
    }
}

// insert at start
void insertAtStart(int givendata)
{
    if (first == NULL && last == NULL)
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = curr;
        first = curr;
        last = curr;
    }
    else
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = first;
        last->next = curr;
        last = curr;
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

    printnodes();
    
    cout << endl;

    cout << "first node is : " << first->data << endl;
    cout << "last  node is : " << last->data << endl;
}