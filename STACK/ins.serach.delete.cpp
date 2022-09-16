#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *first;
node *last;

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
        curr->next = first;
        first = curr;
    }
}
void insertatend(int givendata)
{
    if (first == NULL && last == NULL)
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = NULL;
        last = curr;
        first = curr;
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
void searchANode(int givenData)
{
    node *curr = new node();
    curr = first;

    // Traversing until we get the last node
    int index = 1;
    while (curr != NULL)
    {
        if (curr->data == givenData)
        {
            cout << curr->data << " is found in the list which is " << index << " node.";
            exit(0);
        }
        index++;
        curr = curr->next;
        
    }
    cout << "*************** Element not found in list *********** ";
}
void printnodes()
{
    node *curr = first;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
void deleteAtstart()
{
    node *curr = first;
    first = first->next;
    curr->next = NULL;
    delete curr;
}
int main()
{
    system("cls");


    int size, givendata,n;
    do
    {
        cout << " PRESS 1 FOR INSERT AT START. \n PRESS 2 FOR NSERT AT END. \n PRESS 3 FOR SEARCH.\n PRESS 4 FOR DELETE. \n PRESS 0 FOR EXIT. \n ENTER YOUR CHOICE  ";
        cin >> n;

    
        switch (n)

        {

        case 1:
            first = NULL;
            last = NULL;
            cout << "Enter size : ";
            cin >> size;
            for (int i = 0; i < size; i++)
            {
                cout << "Enter the value of " << i + 1 << " node : ";
                cin >> givendata;
                insertatstart(givendata);
            }
            cout << " INSERT AT END " << endl;
            printnodes();
            cout << endl;

            cout << "FIRST NODE IS : " << first->data << " \n"
                 << "LAST NODE IS : " << last->data << endl;
            cout << endl;
            cout << endl;
            break;
        case 2:
               first=NULL;
               last=NULL;
            cout << "Enter size : ";
            cin >> size;
            for (int i = 0; i < size; i++)
            {
                cout << "Enter the value of " << i + 1 << " node : ";
                cin >> givendata;
                insertatend(givendata);
            }

            cout << " INSERT AT START " << endl;
            printnodes();
            cout << endl;
            cout << endl;

            cout << "FIRST NODE IS : " << first->data << " \n"
                 << "LAST NODE IS : " << last->data << endl;
            cout << endl;
            break;

        case 3:
            int x;
            cout << "Enter your value to search ";
            cin >> x;
            searchANode(x);

        case 4:
            
             deleteAtstart();
             printnodes();cout<<endl;
            
        }
    } while (n != 0);
}