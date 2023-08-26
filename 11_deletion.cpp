// Coding deletion operation in Array using C++ language.

#include<iostream>
using namespace std;

void display(int arr[] , int n){
    // Code for traversal
    for(int i = 0;i<n;i++){
        cout<<"Your number at index "<<i<<" is "<<arr[i]<<endl;
    }
}

void index_deletion(int array[] , int n , int index , int capacity){
    // Code for deletion
    if(index>=capacity){
        cout<<"You can not do deletion . "<<endl;
    }
    for(int i=index;i<n-1;i++){
        array[i] = array[i+1];
    }
}

int main(){
    int array[100] = {1,5,67,89,54};
    int size = 5;
    display(array , size);
    int index;
    cout<<"Enter the index on which you want deletion . "<<endl;
    cin>>index;
    int capacity = 100;
    index_deletion(array , size , index , capacity);
    size -= 1; // size = size - 1;
    // cout<<size<<endl;
    display(array,size);
    return 0;
}