#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
node *first;
node *last;

// insert from start
void insertAtStart(int givendata)
{
    if (first == NULL && last == NULL)
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = NULL;
        curr->prev = NULL;
        first = curr;
        last = curr;
    }

    else
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = first;
        first->prev = curr;
        first = curr;
    }
}

// insert from end
void insertAtend(int givendata)
{
    if (first == NULL && last == NULL)
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = NULL;
        curr->prev = NULL;
        first = curr;
        last = curr;
    }

    else
    {
        node *curr = new node();
        curr->data = givendata;
        curr->next = NULL;
        curr->prev = last;
        last->next = curr;
        last = curr;
    }
}

// Traversing in link list

void insertATmid(int nodeData, int location)
{
    node *next = first;
    while (next != NULL)
    {
        if (next->data == location)
        {
            node *curr = new node();
            curr->data = nodeData;
            curr->next = next;
            next->prev->next = curr;
            curr->prev = next->prev;
            next->prev = curr;
        }
        next = next->next;
    }
}
void deleteATmid(int location)
{
    node *next = first;
    while (next != NULL)
    {
        if (next->data == location)
        {
            next->prev->next = next->next;
            next->next->prev = next->prev;
            next->prev = NULL;
            next->next = NULL;
        }
        next = next->next;
    }
}
void deleteatstart()
{
    node *curr = first;
    first = first->next;
    curr->next = NULL;
    delete curr;
}
void deleteatend()
{

    node *curr = last;
    last->prev->next = NULL;
    last = last->prev;

    delete curr;
}
void printNodes()
{
    node *curr = first;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
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
              cout << "\t\t\t\t\t Insert at mid \t\t\t\t"<<endl;
    cout << "\t\t\t\t\t Before changes \t\t\t\t  " << endl;
    printNodes();
    cout << endl
         << " \t\t\t\t\t After changes \t\t\t\t " << endl;
    insertATmid(40, 50);
    printNodes();
    cout << " " << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data;

    cout << endl;

    cout << "\n Insert at start \n\n"
         << endl;

    printNodes();
    cout << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data << endl;
    cout << endl;
    cout << "\n Insert at end\n " << endl;
    first = NULL;
    last = NULL;
    insertAtend(70);
    insertAtend(60);
    insertAtend(50);
    insertAtend(40);
    insertAtend(30);
    insertAtend(20);
    insertAtend(10);
    printNodes();
    cout << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data << endl;
    cout << endl
         << "  DELETE  AT  MID " << endl;
    cout << "\tBefore changes \t\t\t  " << endl;
    printNodes();
    cout << endl
         << " \t After changes \t\t\t " << endl;
    deleteATmid(40);
    printNodes();
    cout << " " << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data << endl;
    cout << endl
         << "  DELETE  AT  END " << endl;
    first = NULL;
    last = NULL;
    insertAtend(70);
    insertAtend(60);
    insertAtend(50);
    insertAtend(40);
    insertAtend(30);
    insertAtend(20);
    insertAtend(10);
    printNodes();
    cout << endl;
    deleteatend();
    printNodes();
    cout << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data << endl;

    cout << endl;
    
    cout << "  DELETE  AT  Start " << endl;
    first = NULL;
    last = NULL;
    insertAtend(70);
    insertAtend(60);
    insertAtend(50);
    insertAtend(40);
    insertAtend(30);
    insertAtend(20);
    insertAtend(10);
    printNodes();
    cout << endl;
    deleteatstart();
    printNodes();
    cout << endl;
    cout << "first node is " << first->data << endl;
    cout << "last node is " << last->data << endl;
}