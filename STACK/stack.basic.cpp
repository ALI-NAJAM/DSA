#include <iostream>
using namespace std;

struct stack
{
    int top=-1;
    int size=3;
    int *arr=new int[size];

   
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "underflow"<<endl;
                }
        else
        {
            int value = arr[top];
            top--;
            return top;
        }
    }
    void display()
    {
        int t = top;
        while (t != -1)
        {
            cout << arr[t] << " ";
            t--;
        }
    }
};

int main()
{
    stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);

    cout << "Before: " << endl;
    myStack.display();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    cout << endl
         << "After: " << endl;
    myStack.display();
}