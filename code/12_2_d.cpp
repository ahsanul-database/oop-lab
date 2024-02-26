#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    do
    {
        sum += (n * n);
        n--;
    } while (n > 0);
    cout << sum << endl;
    return 0;
}