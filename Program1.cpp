#include<iostream>
using namespace std;

void func1(int array[] , int length ){
    int sum = 0;
    int product = 1;
    for(int i = 0 ; i<length ; i++){
        // cout<<array[i]<<endl;
        sum += array[i];
        
    }
    for(int i = 0;i<length ; i++){
        product *= array[i];
    }
}

int main(){
    int arr[] = {3, 5, 66};
    int size = 3;
    func1 (arr , size);

    // Time complexity = O(length)
    return 0;
}