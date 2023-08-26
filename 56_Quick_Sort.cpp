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

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j];
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
    
}

    void Quick_Sort(int A[], int low, int high)
    {
        int partition_index; // Index of pivot after partition

        if (low < high)
        {
            partition_index = partition(A, low, high);
            printArray(A , 9);
            Quick_Sort(A, low, partition_index - 1);  // Sort left sub-array
            Quick_Sort(A, partition_index + 1, high); // Sort right sub-array
        }
    }

    int main()
    {
        // 3, 5, 2, 13, 12 , 3 , 2 , 13 , 45

        // 3, 2i, 2, 13, 12 , 3 , 5j , 13 , 45
        // 3, 2, 2, 13i, 12 , 3j , 5 , 13 , 45
        // 3, 2, 2, 3i, 12 , 13j , 5 , 13 , 45
        // 3, 2, 2, 3j , 12i , 13 , 5 , 13 , 45
        // 3, 2, 2, 3j , 12i , 13 , 5 , 13 , 45 ---> First Call to partition returns 3

        int A[] = {3, 5, 2, 13, 12 , 3 , 2 , 13 , 45};
        int n = 9;
        printArray(A, n);
        Quick_Sort(A, 0, n - 1);
        printArray(A, n);
        return 0;
    }