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
    int n, t, m = 10, x = n, count = 0;
    cin >> n >> t;
    while (x != 0)
    {
        x = n / m;
        count++;
        m = m * 10;
    }
    cout<<count;
    int a[count], i = 0;
    x=n;
    while (x != 0)
    {
        x = n % 10;
        a[i] = x;
        n = n / 10;
        i++;
    }
    int c = 0;
    for (int i = 0; i < count; i++)
    {
        if (a[i] == t)
        {
            c++;
        }
    }
    cout << c;
}