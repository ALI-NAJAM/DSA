#include <iostream>
using namespace std;

struct Stack
{
    int top;
    int size;
    int *arr;

    Stack(int s)
    {
        top = -1;
        size = s;
        arr = new int[size];
    }
    bool is_empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool is_Full()
    {
        if (top == size - 1)
        {
            return true;
        }
        else
            return false;
    }
    void push(int value)
    {
        if ( is_Full())
        {
            cout << "Cannot push " << value << " in the stack as the stack is allready full !!" << endl;
        }
        else
            top++;
        arr[top] = value;
    }

    int pop()
    {
        if (is_empty())
        {
            cout << "Cannot pop in the stack as the stack is allready empty !!" << endl;
        }
        else
        {
            int val = arr[top];
            top--;
            return val;
        }
    }

    int display()
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

    system("cls");

    int size,value;
    cout << "Enter your size ";
    cin >> size;
    Stack myStack(size);


    for(int i=0;i<size;i++){
    cout<<" Enter your "<< i+1 << " value to push ";
    cin>>value;
    
    myStack.push(value);
    
    }

    cout << "Before: " << endl;
    myStack.display();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    
    cout << endl;
        cout << "After: " << endl;
    myStack.display();
    
}