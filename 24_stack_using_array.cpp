// Implementing Stack using array in data structures

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
};

int main()
{
    // Stack s(80 , -1); // Is exactly same as
    Stack *s = new Stack(6, -1);

    // Pushing an element manually .
    s->arr[0] = 7;
    s->top++;
    s->arr[1] = 8;
    s->top++;
    s->arr[2] = 12;
    s->top++;
    s->arr[3] = 9;
    s->top++;
    s->arr[4] = 10;
    s->top++;
    s->arr[5] = 6;
    s->top++;

    // Check if stack is Empty .
    if (s->isEmpty(s))
    {
        cout << "The Stack is Empty . " << endl;
    }
    else
    {
        cout << "The Stack is not Empty . " << endl;
    }
    // Check if stack is Full .
    if (s->isFull(s))
    {
        cout << "The Stack is Full . " << endl;
    }
    else
    {
        cout << "The Stack is not Full . " << endl;
    }

    return 0;
}