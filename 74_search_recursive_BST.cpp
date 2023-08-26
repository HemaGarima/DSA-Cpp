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
    void inorder(Node* root){
        if(root != NULL){
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }
    int isBST(Node* root){
        static Node* prev = NULL;
        if(root != NULL){
            if(!isBST(root->left)){
                return 0;
            }
            if(prev != NULL && root->data <= prev->data){
                return 0;
            }
            prev = root;
            return isBST(root->right);
        }
        else{
            return 1;
        }
    }
    Node* search(Node* root , int key){
        if(root == NULL){
            return NULL;
        }
        if(key == root->data){
            return root;
        }
        else if(key < root->data){
            return search(root->left , key);
        }
        else{
            return search(root->right , key);
        }
    }
};

int main(){

    // Creating the root node - Using Function(Recommended).
    Node* l = new Node;
    Node* p = l->CreateNode(5);
    Node* p1 = l->CreateNode(3);
    Node* p2 = l->CreateNode(6);
    Node* p3 = l->CreateNode(1);
    Node* p4 = l->CreateNode(4);

    // Finally the tree looks like this: 
    //            5
    //           / \
    //          3   6
    //         / \ 
    //        1   4

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    Node* n = l->search(p , 3);
    if(n != NULL){
        cout<<"Found : "<<n->data<<endl;
    }
    else{
        cout<<"Element NOT found . "<<endl;
    }

    return 0;
}