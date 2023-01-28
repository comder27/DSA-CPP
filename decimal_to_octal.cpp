#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main()
{
    fio;
    int n, x, r = 0, m = 10;
    int d = 0;
    cin >> n;
    x = 0;
    int i = 0;
    while (n != 0)
    {
        r = n % 8;
        d = d + r * (pow(10, i));
        n = n / 8;
        i++;
    }
    cout << d;
}