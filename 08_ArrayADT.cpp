// Implementing array as an abstract data type in C++ language.

#include<iostream>
using namespace std;

class myArray{
    int total_size;
    int used_size;
    int* ptr;
    public:
    myArray(int tsize , int usize ){
        total_size = tsize;
        used_size = usize;
        ptr = new int [total_size];
    }
    void set_val(){
        for(int i = 0;i<used_size;i++){
            cout<<"Enter the "<<i<<" index element . "<<endl;
            cin>>ptr[i];
        }
    } 
    void show(){
        for(int i = 0;i<used_size;i++){
            cout<<"The value at index "<<i<<" is "<<ptr[i]<<endl;
        }
    }
};

int main(){
    myArray marks(10 , 2);
    // marks.show();
    cout<<"We are running set_val now."<<endl;
    marks.set_val();
    cout<<"We are running show now."<<endl;
    marks.show();
    return 0;
}