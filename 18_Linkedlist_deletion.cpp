// Delete a Node from linked list in C++ language.

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
    // Case 1 : Deleting the first element from the linked list
    Node* deletefirst(Node* head){
        Node* ptr = head;
        head = head->next;
        delete ptr;
        return head;
    }

    // Case 2 : Deleting the element at a given index from the linked list
    Node* deleteAtIndex(Node* head , int index){
        Node* p = head;
        Node* q = head->next;
        for(int i = 0; i<index-1 ; i++){
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        delete q;
        return head;
    }

    // Case 3 : Delete at end of the linked list
    Node* deleteAtEnd(Node* head ){
        Node* p = head;
        Node* q = head->next;
        while(q->next != NULL){
            p = p->next;
            q = q->next;
        }
        p->next = NULL;
        delete q;
        return head;
    }

    // Case 4 : Deleting the element with a given value from the linked list
    Node* deleteAtValue(Node* head , int value){
        Node* p = head;
        Node* q = head->next;
        while(q->data != value && q->next != NULL){
            p = p->next;
            q = q->next;
        }
        if(q->data == value){
            p->next = q->next ; 
            delete q;
        }
        return head;
    }

};

int main(){
    // Allocate memory for nodes in the linked list in Heap
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* four = new Node;

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = four;

    // Terminate the list at the fourth node
    four->data = 1;
    four->next = NULL;

    cout<<"Linked list before deletion . "<<endl;
    head->linkedlistTraversal(head);

    // Case 1 : Deleting the first element from the linked list
    // head = head->deletefirst(head); 
    // head = head->deletefirst(head); 

    // Case 2 : Deleting at any index
    // head = head->deleteAtIndex(head , 2);

    // Case 3 : Deleting at end
    // head = head->deleteAtEnd(head);

    // Case 4 : Deleting at Value
    head = head->deleteAtValue(head , 8);

    cout<<"Linked list after deletion . "<<endl;
    head->linkedlistTraversal(head);

    return 0;
}