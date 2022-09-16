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
        cout << curr->data << " ";
        curr = curr->next;
    }
    if (curr->next == first)
    {
        cout << curr->data << " ";
    }
}

// insert at start
void insertAtStart(int givendata)
{
    if (first == NULL && last == NULL)
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next == NULL;
        first = curr;
        last = curr;
    }
    else
    {
        node *curr = new node();
        curr->data = givendata;
        last->next = curr;
        curr->next = first;
        last = curr;
    }
}
void insertatmid(int location)
{
    node *next = first;
    node *prev;
    while (next->next !=first)
    {
        if (next->data == location)
        {
         
        prev->next = next->next;
        next->next = NULL;
        delete next;
       break;
        }
        prev = next;
        next = next->next;
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
cout<<endl;
    insertatmid(30);

    printnodes();
      cout << endl;

    cout << "first node is : " << first->data << endl;
    cout << "last  node is : " << last->data << endl;
}