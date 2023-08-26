// Coding insertion operation in array in data structures in C++ language.

#include<iostream>
using namespace std;


void display(int arr[] , int used_size){
    // Code for Traversal
    for(int i = 0 ; i<used_size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int IndexInsertion(int arr[] , int size , int element , int capacity ,int index){
    // Code for insertion
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1 ; i>=index ;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}


int main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5 , element = 45 , index = 3;
    display(arr , size);
    IndexInsertion(arr , size , element , 100 ,index);
    size += 1; // size = size + 1;
    display(arr , size);
    return 0; 
}

// Quiz : If insertion is successful then print array otherwise print insertion is failed.