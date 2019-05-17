#include <iostream>
#include <vector>
using namespace std;

bool SubsetSum(vector<int> const &X, int i, int T)
{
    if (T == 0)
    {
        return true;
    }
    else if ((T < 0) || i == 0)
    {
        return false;
    }
    else
    {
        bool with = SubsetSum(X, i - 1, T - X[i]);
        bool without = SubsetSum(X, i - 1, T);
        return with || without;
    }
    return true;
}

int main()
{
    vector<int> X = {8, 6, 7, 5, 3, 10, 9};
    cout << "The result of X={8, 6, 7, 5, 3, 10, 9},T=15 is : " << SubsetSum(X, X.size() - 1, 15) << endl;
    X = {11, 6, 5, 1, 7, 13, 12};
    cout << "The result of X={11, 6, 5, 1, 7, 13, 12},T=15 is : " << SubsetSum(X, X.size() - 1, 15) << endl;
    return 0;
}