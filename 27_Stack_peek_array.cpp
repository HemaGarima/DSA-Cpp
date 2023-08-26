// Peek Operation in Stack Using Arrays

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
        arr = new int[size];
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
    int peek(Stack* sp , int i){
        int ArrayInd = sp->top-i+1;
        if(ArrayInd < 0){
            cout<<"Not a valid position for the Stack . "<<endl;
            return -1;
        }
        else{
            return sp->arr[ArrayInd];
        }
    }
};

int main()
{
    Stack *sp = new Stack(50, -1);
    
    sp->push(sp , 1);
    sp->push(sp , 23);
    sp->push(sp , 99);
    sp->push(sp , 75);
    sp->push(sp , 3);
    sp->push(sp , 64);
    sp->push(sp , 57);
    sp->push(sp , 46);
    sp->push(sp , 89);
    sp->push(sp , 6); 
    sp->push(sp , 46); 
    sp->push(sp , 75); 

    // Printing values from the Stack
    for(int j = 1;j <= sp-> top+1 ; j++ ){
    cout<<"The value at position "<<j<<" is "<<sp->peek(sp , j)<<endl;
    }

    return 0;
}