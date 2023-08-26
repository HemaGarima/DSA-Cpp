#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    void linkedlistTraversal(Node* head){
        Node* ptr = head;
        // cout<<"Element : "<<ptr->data<<endl;
        // ptr = ptr->next;
            do{
            cout<<"Element : "<<ptr->data<<endl;
            ptr = ptr->next;
            }while(ptr != head);
    }
    Node* InsertAtFirst(Node* head , int data){
        Node* ptr = new Node;
        ptr->data = data;
        Node* p = head->next;
        while(p->next != head){
            p = p->next;
        }
        // At this point , p points to the last node of this circular linked list
        p->next = ptr;
        ptr->next = head;
        head = ptr;
        return head;
    }
};

int main(){
    // Allocate memory for nodes in the linked list in Heap
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = head;

    cout<<"Circular Linked list before insertion . "<<endl;
    head->linkedlistTraversal(head);
    cout<<endl;
    head = head->InsertAtFirst(head , 54);
    head = head->InsertAtFirst(head , 58);
    // head = head->InsertAtFirst(head , 59);
    cout<<"Circular Linked list after insertion . "<<endl;
    head->linkedlistTraversal(head);

    return 0;
}