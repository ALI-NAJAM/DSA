#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *arr;
    // Argument constructor
    stack(int s)
    {
         top = -1;
        size = s;
        arr = new int[size];
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
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
        if (isFull())
        {
            cout << "Overflow";
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }
        int pop()
        {
            if (isEmpty())
            {
                cout << "Underflowflow";
            }
            else
            {
                int val = arr[top];
                top--;
                return val;
            }
        }
    

    void display(){
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
    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << "Before: " << endl;
    s.display();
    s.pop();
    s.pop();
    s.pop();

    cout << endl;
    cout << "After: " << endl;
    s.display();
}