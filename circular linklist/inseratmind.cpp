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
void insertATmid(int givendata, int location){
    node*next=first;
    node*prev;
    while (next->next!=NULL)
    {
        if (next->data==location)
        {
             node*curr=new node();
             curr->data=givendata;
             curr->next=next;
             prev->next=curr;
             break;
        }
        prev=next;
        next=next->next;
    }
    

}

int main()
{
    system("cls");
    insertAtStart(10);
    insertAtStart(20);
    insertAtStart(30);
    insertAtStart(40);
    insertAtStart(50);
    cout << "\n\n\n";
    printnodes();
    

    cout << "\n\n\n"
         << endl;
         insertATmid(40,40);
    printnodes();

    cout << "\n\n\n"
         << endl;
    cout << "first node is : " << first->data << endl;
    cout << "last  node is : " << last->data << endl;
}