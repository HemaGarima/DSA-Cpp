#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node* CreateNode(int data){
        Node* n = new Node; // Creating a node pointer and allocating the memory in the heap.  
        n->data = data; // Setting the data. 
        n->left = NULL; // Setting the left childeren to NULL.
        n->right = NULL; // Setting the right children to NULL. 
        return n; // Finally returning the created node. 
    }
};



int main(){
    /*
    // Constructing the root node. 
    Node* p = new Node;
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node.
    Node* p1 = new Node;
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node. 
    Node* p2 = new Node;
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */

    // Creating the root node - Using Function(Recommended).
    Node* l = new Node;
    Node* p = l->CreateNode(2);
    Node* p1 = l->CreateNode(4);
    Node* p2 = l->CreateNode(1);

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;

    return 0;
}