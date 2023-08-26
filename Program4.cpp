#include<iostream>
using namespace std;

int isPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i = 2;i*i < n;i++){
        if(i==0){
            return 0;
        }
        return 1;
    }
}

int main(){
    isPrime(4);
    // Time Complexity = O(root(n))
    return 0;
}