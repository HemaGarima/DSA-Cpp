#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int size;
    int f;
    int r;
    int* arr;
    int isEmpty(CircularQueue* q){
        if(q->r == q->f){
            return 1;
        }
        return 0;
    }
    int isFull(CircularQueue* q){
        if(((q->r+1)%(q->size)) == q->f){
            return 1;
        }
        return 0;
    }
    void enqueue(CircularQueue* q , int val){
        if(isFull(q)){
            cout<<"This queue is full . "<<endl;
        }
        else{
            q->r = (q->r+1)%q->size;
            q->arr[q->r] = val;
            cout<<"Enqued element : "<<val<<endl;
        }
    }
    int dequeue(CircularQueue* q){
        int a = -1;
        if(isEmpty(q)){
            cout<<"The queue is Empty"<<endl;
        }
        else{
            q->f = (q->f+1)%q->size;
            a = q->arr[q->f];
        }
        return a;
    }
};

int main(){
    CircularQueue q;
    q.size = 4;  
    q.f = q.r = 0;
    q.arr = new int[q.size];
    if(q.isEmpty(&q)){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }
    // Enqueue few elements
    q.enqueue(&q , 12);
    q.enqueue(&q , 15);
    q.enqueue(&q , 9);
    cout<<"Dequeuing element "<<q.dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<q.dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<q.dequeue(&q)<<endl;
    q.enqueue(&q , 7);
    q.enqueue(&q , 45);
    q.enqueue(&q , 94);
    if(q.isEmpty(&q)){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }
    if(q.isFull(&q)){
        cout<<"Queue is Full"<<endl;
    }
    else{
        cout<<"Queue is not Full"<<endl;
    }
    return 0;
}