#include <cstdio>
#include <>
using namespace std;

void merge(int x[], int m)
{
}

void mergesort(int A[], int start, int end)
{
    int n = sizeof(A) / sizeof(A[0]);
    if (n > 1)
    {
        int m = n >> 1;
        mergesort(A, 0, m);
        mergesort(A, m + 1, n - 1);
    }
}