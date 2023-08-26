#include <iostream>
using namespace std;



class Node{
public:
    int data;
    Node* next;
    int isEmpty(Node* top)
    {
        if (top == NULL)
        {
            return 1;
        }
        return 0;
    }
    int isFull(Node *top)
    {
        Node *p = new Node;
        if (p == NULL)
        {
            return 1;
        }
        return 0;
    }
    Node* push(Node* top , int x){
        if(isFull(top)){
            cout<<"Stack Overflow . "<<endl;
        }
        else{
            Node* n = new Node;
            n->data = x;
            n->next = top;
            top = n;
            return top;
        }
    }
    void linkedListTraversal(Node* ptr){
        while(ptr != NULL){
            cout<<"Element : "<<ptr->data<<endl;
            ptr = ptr->next;
        }
    }
    int pop(Node* tp){
        if(isEmpty(tp)){
            cout<<"Stack Underflow . "<<endl;
        }
        else{
            Node* n = tp;
            top = (tp)->next;
            int x = n->data;
            delete(n);
            return x;
        }
    }
};

Node* top = NULL;

int main()
{
    top = top->push(top , 78);
    top = top->push(top , 7);
    top = top->push(top , 8);
    top->linkedListTraversal(top);
    cout<<endl;
    int element = top->pop(top);  
    cout<<"Popped element is "<<element<<endl;
    top->linkedListTraversal(top);
    return 0;
}