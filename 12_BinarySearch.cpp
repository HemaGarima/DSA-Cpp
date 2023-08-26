// Binary search + Code in C++ language.

#include<iostream>
using namespace std;

int binarysearch(int g[] , int element , int size){
    int low , mid , high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    // Start Searching
    while(low<=high){
    mid = (low+high)/2;
    if(g[mid] == element){
        return mid;  
    }
    if (g[mid] < element){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
    // Searching Ends
    }
    return -1;
}

int main(){
    // Sorted array for binary search
    int garima[] = {1,5,13,22,67,89,104};
    int element;
    cout<<"Enter your element . "<<endl;
    cin>>element;
    int size = sizeof(garima)/sizeof(int);
    cout<<"The size of garima array is "<<size<<endl;
    int searchindex = binarysearch( garima , element , size);
    cout<<"The element "<<element<<" is at index "<<searchindex<<endl;
    return 0;
}