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
    Node* searchiter(Node* root , int key){
        while(root != NULL){
            if(key == root->data){
                return root;
            }
            else if(key < root->data){
                root = root->left;
            }
            else{
                root = root->right;
            }
        } 
        return NULL;
    }
    void insert(Node* root , int key){
        Node* prev = NULL;
        while(root != NULL){
            prev = root;
            if(key == root->data){
                cout<<"Cannot insert "<<key<<" is already in BST . "<<endl;
                return;
            }
            else if(key < root->data){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        Node* news = CreateNode(key);
        if(key < prev->data){
            prev->left = news;
        }
        else{
            prev->right = news;
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

    l->insert(p , 6);
    cout<<p->right->right->data;
    return 0;
}