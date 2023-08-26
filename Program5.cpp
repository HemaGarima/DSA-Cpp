#include<iostream>
using namespace std;

int isPrime(int n){
    for(int i = 2; i*i < 10000 ; i++){
        if( n%i == 0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 1;
}

int main(){
    isPrime(18);
    return 0;
}

// Time Complexity = O(n)