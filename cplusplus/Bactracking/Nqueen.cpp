#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> const &Q)
{
    for (size_t i = 0; i < Q.size(); i++)
    {
        cout << Q.at(i) << " ";
    }
    cout << "\n"
         << endl;
}

void PlaceQueens(vector<int> Q, int r)
{
    int n = Q.size();
    if (r == n)
    {
        cout << "Solution: " << endl;
        print(Q);
    }
    else
    {
        for (size_t j = 0; j < n; j++)
        {
            bool legal = true;
            for (size_t i = 0; i < r; i++)
            {
                if (Q[i] == j || Q[i] == j + r - i || Q[i] == j - r + i)
                {
                    legal = false;
                }
            }
            if (legal)
            {
                Q[r] = j;
                PlaceQueens(Q, r + 1);
            }
        }
    }
}

void NQueens(int n)
{
    vector<int> Q(n, -1);
    PlaceQueens(Q, 0);
}

int main()
{
    NQueens(4);
}