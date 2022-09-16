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
void insertatmid(int givennode , int location){
    node*next=first;
    node*prev=NULL;
    while(next!=NULL){
            if(next->data==location){
                node*curr=new node();
                curr->data=givennode;
                curr->next=next;
                prev->next=curr;
            }
            prev=next;
            next=next->next;
    }

}
int main()
{
    system("cls");
    insertatstart(10);
    insertatstart(20);
    insertatstart(30);
    insertatstart(50);
    insertatstart(60);

cout << endl;

    printnode();
    cout << endl;
     insertatmid(40,50);
     printnode();

cout << endl;

     cout << "first node is : " << first->data << endl;
     cout << "last  node is : " << last->data;
}
