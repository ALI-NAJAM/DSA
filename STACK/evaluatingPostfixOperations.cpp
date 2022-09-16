#include <iostream>
using namespace std;

struct Stack
{
    int top;
    int size;
    char *arr;

    Stack(int s)
    {
        top = -1;
        size = s;
        arr = new char[size];
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

    bool isFull()
    {
        if (top == size - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    void push(char value)
    {
        if (isFull())
        {
            cout << "Stack OverFlow";
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    char pop()
    {

        if (isEmpty())
        {
            cout << "Stack UnderFlow";
        }
        else
        {
            char value = arr[top];
            top--;
            return value;
        }
    }

    int evaluatingPostfixExpressions(string str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] > '0' && str[i] < '9')
            {
                push(str[i] - '0');
            }
            else
            {
                int oper2 = pop();
                int oper1 = pop();

                switch (str[i])
                {
                case '+':
                {
                    push(oper1 + oper2);
                    break;
                }
                case '-':
                {
                    push(oper1 - oper2);
                    break;
                }
                case '*':
                {
                    push(oper1 * oper2);
                    break;
                }
                case '/':
                {
                    push(oper1 / oper2);
                    break;
                }
                }
            }
        }
        return arr[top];
    }
};

int main()
{
    system("cls");
    Stack myStack(10);
    cout << myStack.evaluatingPostfixExpressions("5+8");
}