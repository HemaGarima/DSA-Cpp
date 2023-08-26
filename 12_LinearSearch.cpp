// Linear search + Code in C++ language.

#include<iostream>
using namespace std;

int linearsearch(int element,int array[],int size){
    for(int i=0;i<size;i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    // Unsorted array for linear search
    int array[] = {23,45,56,64,32,2,28,1,26};
    int size = sizeof(array)/sizeof(int) ;
    int element ;
    cout<<"Enter your element . "<<endl;
    cin>>element;
    int searchindex = linearsearch(element , array ,size);
    cout<<"The element "<<element<<" is found at index "<<searchindex<<endl;
    // cout<<sizeof(int);
    return 0;
}