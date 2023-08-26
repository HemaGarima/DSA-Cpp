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

void merge(int A[], int low, int mid, int high)
{
    int i, j, k;
    int B[100]; // Do dynamic memory allocation for array of size [high - low + 1]
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for(int i = low ; i<= high ;i++){
        A[i] = B[i];
    }
}

void Merge_Sort(int A[] , int low , int high){
    int mid;
    if(low<high){
        mid = (low + high)/2 ;
        Merge_Sort(A , low , mid);
        Merge_Sort(A , mid + 1 , high);
        merge(A , low , mid , high);
    }
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14 , 4 , 15, 6};
    int n = 7;
    printArray(A, n);
    Merge_Sort(A , 0 , 6);
    printArray(A, n);
    return 0;
}