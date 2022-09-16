#include <iostream>
using namespace std;

struct Stack{
    int top;
    int size;
    int* arr;


    //Argumented constructor
    Stack(int s){
        top = -1;
        size = s;
        arr = new int[size];
    }


    bool isEmpty(){
        if(top == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (top == size - 1)
        {
            return true;
        }
        return false;
    }

    void push(int value){
        if(isFull()){
            cout<<"Cannot push "<< value<<" in the stack as the stack is allready full!!" <<endl;
        }
        else{
            top++;
            arr[top] = value;
        }
    }

    int pop(){
        if(isEmpty()){
            cout << "Cannot pop from the stack as the stack is allready empty!!" << endl;
            return 0;
        }
        else{
            int val = arr[top];
            top--;
            return val;
        }
    }

    int display(){
        int t = top;
        while(t != - 1){
            cout<<arr[t]<<" ";
            t--;
        }
    }


};

int main(){
system("cls");
    Stack myStack(10);
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);

    cout<<"Before: "<<endl;
    myStack.display();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    cout <<endl<< "After: " << endl;
    myStack.display();
}