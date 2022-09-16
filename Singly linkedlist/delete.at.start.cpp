#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *first;
node *last;
void printnode()
{
    node *curr = first;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
void insertatstart(int givendata)
{
    if (first == NULL && last == NULL)
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = NULL;
        first = curr;
        last = curr;
    }
    else
    {

        node *curr = new node();
        curr->data = givendata;
        curr->next = NULL;
        last->next = curr;
        last = curr;
    }
}

void deleteAtstart(){
    node*curr=first;
    first=first->next;
    curr->next=NULL;
    delete curr;

}
int main()
{
    system("cls");
    insertatstart(10);
    insertatstart(20);
    insertatstart(30);
    insertatstart(40);
    insertatstart(50);

    cout << endl;

    printnode();
    cout << endl;
    deleteAtstart();
    printnode();
    cout << endl;
    cout << "first node is : " << first->data << endl;
    cout << "last  node is : " << last->data;
}
