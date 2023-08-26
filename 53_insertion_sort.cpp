#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void insertionSort(int A[], int n)
{
    int key , j;
    // LOOP FOR PASSES
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i-1;
        // LOOP FOR EACH PASS
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main()
{
    // -1   0     1    2    3    4    5
    //     12 ,| 54 , 65 , 07 , 23 , 09 ---> (i=1 , key = 54 , j = 0)
    //     12 ,| 54 , 65 , 07 , 23 , 09 ---> 1st Pass Done

    //     12 ,  54,| 65 , 07 , 23 , 09 ---> (i=2 , key = 65 , j = 1)
    //     12 ,  54,| 65 , 07 , 23 , 09 ---> 2nd Pass Done

    //     12 ,  54,  65,| 07 , 23 , 09 ---> (i=3 , key = 07 , j = 2)
    //     12 ,  54,  65,| 65 , 23 , 09 ---> (i=3 , key = 07 , j = 1)
    //     12 ,  54,  54,| 65 , 23 , 09 ---> (i=3 , key = 07 , j = 0)
    //     12 ,  12,  54,| 65 , 23 , 09 ---> (i=3 , key = 07 , j = -1)
    //     07 ,  12,  54,| 65 , 23 , 09 ---> 3rd Pass Done    

    //     07 ,  12,  54,  65,| 23 , 09 ---> (i=4 , key = 23 , j = 3)
    //     07 ,  12,  54,  65,| 65 , 09 ---> (i=4 , key = 23 , j = 2)
    //     07 ,  12,  54,  54,| 65 , 09 ---> (i=4 , key = 23 , j = 1)
    //     07 ,  12,  23,  54,| 65 , 09 ---> 4th Pass Done

    //     07 ,  12,  23,  54,  65,| 09 ---> (i=5 , key = 09 , j = 4)
    //     07 ,  12,  23,  54,  65,| 65 ---> (i=5 , key = 09 , j = 3)
    //     07 ,  12,  23,  54,  54,| 65 ---> (i=5 , key = 09 , j = 2)
    //     07 ,  12,  23,  23,  54,| 65 ---> (i=5 , key = 09 , j = 1)
    //     07 ,  12,  12,  23,  54,| 65 ---> (i=5 , key = 09 , j = 0)
    //     07 ,  09,  12,  23,  54,| 65 ---> 5th Pass Done

    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}