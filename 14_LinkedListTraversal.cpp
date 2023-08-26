// Linked List Data Structure : Creation and Traversal in C++ language.

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    void linkedlistTraversal(Node* ptr){
        while(ptr != NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
        }
    }
};

int main(){
    // Allocate memory for nodes in the linked list in Heap
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* four = new Node;

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = four;

    // Terminate the list at the fourth node
    four->data = 66;
    four->next = NULL;

    // third->linkedlistTraversal(head);
    head->linkedlistTraversal(head);

    return 0;
}