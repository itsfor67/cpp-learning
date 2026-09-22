#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int ans = 0;
    int place = 1; // represents 10^i, kept as an integer

    while (a != 0)
    {
        int bit = a & 1;
        ans = ans + bit * place;

        a = a >> 1;
        place *= 10;
    }

    cout << "answer is " << ans << endl;
}
