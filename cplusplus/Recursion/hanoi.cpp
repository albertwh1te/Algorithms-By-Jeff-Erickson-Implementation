#include <cstdio>
using namespace std;

void hanoi(int n, int src, int dst, int tmp)
{
    if (n > 0)
    {
        hanoi(n - 1, src, tmp, dst);
        printf("move disk %d form %d to %d\n", n, src, dst);
        hanoi(n - 1, tmp, dst, src);
    }
}

int main()
{
    hanoi(3, 1, 3, 2);
}