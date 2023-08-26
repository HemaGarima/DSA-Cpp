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
    void postorder(Node* root){
        if(root != NULL){
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<" ";
        }
    }
};



int main(){

    // Creating the root node - Using Function(Recommended).
    Node* l = new Node;
    Node* p = l->CreateNode(4);
    Node* p1 = l->CreateNode(1);
    Node* p2 = l->CreateNode(6);
    Node* p3 = l->CreateNode(5);
    Node* p4 = l->CreateNode(2);

    // Finally the tree looks like this: 
    //            4
    //           / \
    //          1   6
    //         / \ 
    //        5   2

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    l->postorder(p);

    return 0;
}