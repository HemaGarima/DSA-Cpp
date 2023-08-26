// Coding Push() , Pop() , isEmpty() and isFull() Operations in Stack using an Array

#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;
    Stack(int tsize, int ttop)
    {
        size = tsize;
        top = ttop;
        arr = new int[tsize];
    }
    int isEmpty(Stack *ptr)
    {
        if (ptr->top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isFull(Stack *ptr)
    {
        if (ptr->top == size - 1)
        {
            return 1;
        }
        return 0;
    }
    void push(Stack* ptr , int val){
        if(isFull(ptr)){
            cout<<"Stack Overflow and can not push "<<val<<endl;
        }
        else{
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
    }
    int pop(Stack* ptr){
        if(isEmpty(ptr)){
            cout<<"Stack Underflow and can not pop from the stack . "<<endl;
            return -1;
        }
        else{
            int val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }
};

int main()
{
    Stack *sp = new Stack(10, -1);
    cout << "Stack has been created successfully . " << endl;
    cout<<"Before Pushing . "<<endl;
    cout<<"Is FULL : "<<sp->isFull(sp)<<endl;
    cout<<"Is EMPTY : "<<sp->isEmpty(sp)<<endl;
    sp->push(sp , 1);
    sp->push(sp , 23);
    sp->push(sp , 99);
    sp->push(sp , 75);
    sp->push(sp , 3);
    sp->push(sp , 64);
    sp->push(sp , 57);
    sp->push(sp , 46);
    sp->push(sp , 89);
    sp->push(sp , 6); // ---> Pushed 10 values .
    sp->push(sp , 46); // ---> Stack Overflow since the size of the Stack is 10 .
    // sp->push(sp , 90);
    cout<<"After pushing . "<<endl;
    cout<<"Is FULL : "<<sp->isFull(sp)<<endl;
    cout<<"Is EMPTY : "<<sp->isEmpty(sp)<<endl;
    cout<<"Popped "<<sp->pop(sp)<<" from the Stack . "<<endl; // Last in First out
    cout<<"Popped "<<sp->pop(sp)<<" from the Stack . "<<endl; // Last in First out
    cout<<"Popped "<<sp->pop(sp)<<" from the Stack . "<<endl; // Last in First out

    return 0;
}