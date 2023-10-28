#include<iostream>
using namespace std;

class queue{
    public:
    int size;
    int f;
    int r;
    int* arr;
    int isEmpty(queue* q){
        if(q->r == q->f){
            return 1;
        }
        return 0;
    }
    int isFull(queue* q){
        if(q->r == q->size-1){
            return 1;
        }
        return 0;
    }
    void enqueue(queue* q , int val){
        if(isFull(q)){
            cout<<"This queue is full . "<<endl;
        }
        else{
            q->r++;
            q->arr[q->r] = val;
        }
    }
    int dequeue(queue* q){
        int a = -1;
        if(isEmpty(q)){
            cout<<"The queue is Empty"<<endl;
        }
        else{
            q->f++;
            a = q->arr[q->f];
        }
        return a;
    }
};

int main(){
    queue q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
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
    cout<<"Dequeuing element "<<q.dequeue(&q)<<endl;
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