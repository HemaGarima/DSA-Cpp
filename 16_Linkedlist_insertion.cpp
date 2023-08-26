// Insertion in a linked list in C++ language.

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

    // Case : 1
    Node* InsertAtFirst(Node* h , int data){
        Node* ptr = new Node;
        ptr->data = data;
        ptr->next = h;
        return ptr;
    }

    // Case : 2
    Node* InsertAtIndex(Node* h , int data , int index){
        Node* ptr = new Node;
        Node* p = h;
        int i = 0;
        while(i != index-1){
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;
        return h;
    }

    // Case : 3
    Node* InsertAtEnd(Node* head , int data){
        Node* ptr = new Node;
        ptr->data = data;
        Node* p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
        return head;
    }

    // Case : 4
    Node* InsertAfterTheNode(Node* head , Node* previous_node , int data){
        Node* ptr = new Node;
        ptr->data = data;
        ptr->next = previous_node->next;
        previous_node->next = ptr;
        return head;
    }
};

int main(){
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

    cout<<"Linkedlist Before insertion . "<<endl;
    head->linkedlistTraversal(head);
    cout<<endl;

    cout<<"Linkedlist After Insertion . "<<endl;
    // Case : 1
    // head = head->InsertAtFirst(head , 56);
    // Case : 2
    // head = head->InsertAtIndex(head , 56 , 1);
    // Case : 3
    // head = head->InsertAtEnd(head , 56);
    // Case : 4
    head = head->InsertAfterTheNode(head , third , 45);

    head->linkedlistTraversal(head);

    return 0;
}