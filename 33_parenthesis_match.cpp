#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    char *arr;
    Stack(int tsize, int ttop)
    {
        size = tsize;
        top = ttop;
        arr = new char[size];
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
        // return 0; // can be used instead of else
    }
    int isFull(Stack *ptr)
    {
        if (ptr->top == size - 1)
        {
            return 1;
        }
        return 0;
    }
    void push(Stack* ptr , char val){
        if(isFull(ptr)){
            cout<<"Stack Overflow and can not push "<<val<<endl;
        }
        else{
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
    }
    char pop(Stack* ptr){
        if(isEmpty(ptr)){
            cout<<"Stack Underflow and can not pop from the stack . "<<endl;
            return -1;
        }
        else{
            char val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }
    int parenthesisMatch(char* exp){
        // Create and initialize the stack
        Stack* sp = new Stack(100 , -1);
        for(int i = 0; exp[i] != '\0'; i++){
            if(exp[i] == '('){
                push(sp , '(');
            }
            else if(exp[i] == ')'){
                if(isEmpty(sp)){
                    return 0;
                }
                pop(sp);
            }
        }
        if(isEmpty(sp)){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main(){
    Stack* pen = new Stack(1 , -1);
    char* exp = "8*(9)";

    // Checking if the parenthesis are matching or not.
    if(pen->parenthesisMatch(exp)){
        cout<<"The parenthesis are matching . "<<endl;
    }
    else{
        cout<<"The parenthesis are not matching . "<<endl;
    }
    return 0;
} 