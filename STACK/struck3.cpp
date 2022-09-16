#include <iostream>
using namespace std;

struct stack{
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
   bool isEmpty(){
    if (top==-1)
    {
        return true;
    }
        return false;
   }

   bool isFULL()
   {
       if (top == size-1)
       {
           return true;
       }
       return false;
   }

   void push(int value)
   {
       if (isFULL())
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
            int t=top;
             while (t!=-1)
             {
                cout<<arr[t]<<" ";
                t--;
             }
             
   }
};






int main(){
    system("CLS");
    int size,value;
    cout<<"Enter your size ";
    cin>>size;
    stack s(size);
    for(int i=0;i<size;i++){
             cout<<"Enter the "<<i+1<<" value to push ";
             cin>>value;
             s.push(value);
    }
    cout << "Before: " << endl;
    s.display();
    s.pop();
    s.pop();
    

    cout << endl;
    cout << "After: " << endl;
    s.display();
cout<<endl;
   cout<< s.isFULL();
   cout << endl;
   cout << s.isEmpty();
}