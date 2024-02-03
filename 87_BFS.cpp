#include <iostream>
using namespace std;

class queue
{
public:
    int size;
    int f;
    int r;
    int *arr;
    int isEmpty(queue *q)
    {
        if (q->r == q->f)
        {
            return 1;
        }
        return 0;
    }
    int isFull(queue *q)
    {
        if (q->r == q->size - 1)
        {
            return 1;
        }
        return 0;
    }
    void enqueue(queue *q, int val)
    {
        if (isFull(q))
        {
            cout << "This queue is full.";
        }
        else
        {
            q->r++;
            q->arr[q->r] = val;
        }
    }
    int dequeue(queue *q)
    {
        int a = -1;
        if (isEmpty(q))
        {
            cout << "The queue is empty";
        }
        else
        {
            q->f++;
            a = q->arr[q->f];
        }
        return a;
    }
};

int main()
{
    queue q;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = new int[q.size];

    // BFS Implementation
    int node;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    cout << i;
    visited[i] = 1;
    q.enqueue(&q, i); // Enqueue i for exploration
    while (!q.isEmpty(&q))
    {
        int node = q.dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                cout << j;
                visited[j] = 1;
                q.enqueue(&q, j);
            }
        }
    }
    return 0;
}