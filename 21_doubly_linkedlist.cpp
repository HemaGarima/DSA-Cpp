// Doubly linked list

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    void Traversal(Node* ptr , Node* Ptr){
        Node* p = ptr;
        while(p != NULL){
            cout<<"Element : "<<p->data<<endl;
            p = p->next;
        }
        cout<<endl;
        Node* q = Ptr;
        while(q != NULL){
            cout<<"Element : "<<q->data<<endl;
            q = q->prev;
        }
    }
};

int main(){
    // Create Nodes
    Node* N1 = new Node;
    Node* N2 = new Node;
    Node* N3 = new Node;
    Node* N4 = new Node;

    // Link Nodes
    N1->next = N2;
    N1->data = 23;
    N1->prev = NULL;

    N2->next = N3;
    N2->data = 34;
    N2->prev = N1;

    N3->next = N4;
    N3->data = 56;
    N3->prev = N2;

    N4->next = NULL;
    N4->data = 52;
    N4->prev = N3;

    N1->Traversal(N1 , N4);
    return 0;
}