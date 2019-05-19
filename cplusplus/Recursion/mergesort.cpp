#include <cstdio>

using namespace std;

void merge(int *A, int start, int end, int m)
{
    int n = end - start + 1;
    int i = 0;
    int j = m + 1;
    int B[n];
    for (size_t k = 0; k < n; k++)
    {
        if (j > n)
        {
            B[k] = A[i];
            i++;
        }
        else if (i > m)
        {
            B[k] = A[j];
            j++;
        }
        else if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
    }
    for (size_t k = 0; k < n; k++)
    {
        A[k] = B[k];
    }
}

void mergesort(int *A, int start, int end)
{
    int n = sizeof(A) / sizeof(A[0]);
    printf("the size: %d", n);
    if (n > 1)
    {
        int m = n >> 1;
        mergesort(A, 0, m);
        mergesort(A, m + 1, n - 1);
        merge(A, start, end, m);
    }
}

int main()
{
    int num[5] = {3, 1, 2, 5, 4};
    mergesort(num, 0, 5);
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}