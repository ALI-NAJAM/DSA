#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

stack *top = NULL;

void push(int givendata)
{
    stack *curr = new stack();

    curr->data = givendata;
    curr->next = top;
    top = curr;
}

void pop()
{
    stack *temp;
    temp = top;
    if (temp == NULL)
    {
        cout << "underflow" << endl;
    }
    else
    {
        top = top->next;
        free(temp);
    }
}

void display()
{
    stack *temp;
    temp = top;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    system("CLS");

    int size, value;
    cout << "Enter your size ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " value to push ";
        cin >> value;
        push(value);
    }

    cout << "Before: " << endl;
    display();
    pop();
    pop();
    pop();

    cout << endl;
    cout << "After: " << endl;
    display();
}