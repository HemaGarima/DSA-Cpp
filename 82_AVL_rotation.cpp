#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    Node* left;
    Node* right;
    int height;
    Node* CreateNode(int value){
        Node* node = new Node;
        node->key = value;
        node->left = NULL;
        node->right = NULL;
        node->height = 1;
        return node;
    }
    int getHeight(Node* n){
        if(n == NULL){
            return 0;
        }
        return n->height;  
    }
    int getBalanceFactor(Node* n){
        if(n == NULL){
            return 0;
        }
        return getHeight(n->left) - getHeight(n->right);
    }
    int max(int a , int b){
        if(a>b){
            return a;
        }
        return b;
    }
    Node* rightRotate(Node* y){
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = max(getHeight(y->right) , getHeight(y->left)) + 1;
        x->height = max(getHeight(x->right) , getHeight(x->left)) + 1;

        return x;
    }
    Node* leftRotate(Node* x){
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        y->height = max(getHeight(y->right) , getHeight(y->left)) + 1;
        x->height = max(getHeight(x->right) , getHeight(x->left)) + 1;

        return y;
    }
    Node* insert(Node* node , int key){
        if(node == NULL){
            return (CreateNode(key));
        }
        if(key < node->key){
            node->left = insert(node->left , key);
        }
        else{
            node->right = insert(node->right , key);
        }

        node->height = 1 + max(getHeight(node->left) , getHeight(node->right));

        int bf = getBalanceFactor(node);

        // Left Left Case
        if(bf > 1 && key < node->left->key){
            return rightRotate(node);
        }
        // Right Right Case
        if(bf < -1 && key > node->right->key){
            return leftRotate(node);
        }
        // Left Right Case
        if(bf > 1 && node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
        // Right Left Case
        if(bf < -1 && node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
        return node;
    }
    void preOrder(Node* root){
        if(root != NULL){
            cout<<root->key<<" ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
};

int main(){
    Node* garima = new Node;
    Node* root = NULL;
    root = garima->insert(root , 1);
    root = garima->insert(root , 2);
    root = garima->insert(root , 4);
    root = garima->insert(root , 5);
    root = garima->insert(root , 6);
    root = garima->insert(root , 3);
    
    garima->preOrder(root);

    return 0;
}