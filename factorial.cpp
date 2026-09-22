#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{

    int b = factorial(n);

    int c = factorial(r);

    int d = n - r;

    int e = factorial(d);

    int f = (b / c) / e;

    return f;
}

int main()
{

    cout << "Enter the value of n and r" << endl;

    int a, r;

    cin >> a >> r;

    int ans = nCr(a, r);

    cout << ans;
}