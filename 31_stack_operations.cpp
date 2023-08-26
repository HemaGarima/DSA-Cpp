#include <iostream>
using namespace std;

class Node
{
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
    int pop(Node** top){
        if(isEmpty(*top)){
            cout<<"Stack Underflow . "<<endl;
        }
        else{
            Node* n = *top;
            *top = (*top)->next;
            int x = n->data;
            delete(n);
            return x;
        }
    }
    int peek(int pos , Node* top){
        Node* ptr = top;
        for(int i = 0;(i< pos-1 && ptr!= NULL);i++){
            ptr = ptr->next;
        }
        if(ptr != NULL){
            return ptr->data;
        }
        else{
            return -1;
        }
    }
};

int main()
{
    Node *top = NULL;
    top = top->push(top , 28);
    top = top->push(top , 18);
    top = top->push(top , 15);
    top = top->push(top , 7);
    top->linkedListTraversal(top);
    for(int i = 1;i<=4;i++){
        cout<<"Value at position "<<i<<" is "<<top->peek(i , top)<<endl;
    }
    return 0;
}