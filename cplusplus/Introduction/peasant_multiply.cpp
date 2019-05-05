#include <iostream>
using namespace std;

int peasant_multiply(int x, int y)
{
    int prod = 0;
    while (x > 0)
    {
        if (x % 2 != 0)
        {
            prod = prod + y;
        }
        x = x >> 1;
        y = y + y;
    }
    return prod;
}

int main()
{
    // expected 132
    cout << "12 * 11 = " << peasant_multiply(11, 12) << endl;
    // expected 56088
    cout << "123 * 456 = " << peasant_multiply(123, 456) << endl;

    return 0;
}