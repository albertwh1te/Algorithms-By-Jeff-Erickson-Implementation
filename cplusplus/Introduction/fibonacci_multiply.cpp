#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cmath>
#include <sstream>

using namespace std;

vector<int> string2vector(string s)
{
    vector<int> result;
    for (size_t i = 0; i < s.size(); i++)
    {
        int tmp = s[i] - '0';
        result.push_back(tmp);
    }
    return result;
}

string vector2string(vector<int> v)
{
    stringstream ss;
    copy(v.begin(), v.end(), ostream_iterator<int>(ss, ""));
    return ss.str();
}

vector<int> fibonacci_multiply(vector<int> X, vector<int> Y)
{
    int hold = 0;
    int m = X.size();
    int n = Y.size();
    vector<int> Z;
    for (size_t k = 0; k < n + m - 1; k++)
    {
        for (size_t i = 0; i < m; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (i + j == k)
                {
                    hold += X[i] * Y[j];
                }
            }
        }
        Z.push_back(hold % 10);
        hold = hold / 10;
    }
    return Z;
}

int main()
{
    vector<int> X = string2vector("11");
    vector<int> Y = string2vector("12");
    vector<int> results = fibonacci_multiply(X, Y);
    // expected 121
    cout << "11 * 12 = " << vector2string(results) << endl;
    return 0;
}