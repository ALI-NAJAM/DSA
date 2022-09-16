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
    int index = 1;
    node *curr = first;
    while (curr != NULL)
    {
        cout << curr->data << " ";

        int temp = index;
        cout << "is the " << index << " node " <<endl;
       

        curr = curr->next;
        index++;
        
    }
    
}
int main()
{
    system("cls");
    node *n1 = new node();
    n1->data = 10;
    n1->next = NULL;
    first = n1;
    last = n1;

    node *n2 = new node();
    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;
    last = n2;

    node *n3 = new node();
    n3->data = 30;
    n3->next = NULL;
    n2->next = n3;
    last = n3;

    node *n4 = new node();
    n4->data = 40;
    n4->next = NULL;
    n3->next = n4;
    last = n4;

    node *n5 = new node();
    n5->data = 50;
    n5->next = NULL;
    n4->next = n5;
    last = n5;

    printnode();
    cout << endl;

    cout << "first node is : " << first->data << endl;
    cout << "last  node is : " << last->data;
}