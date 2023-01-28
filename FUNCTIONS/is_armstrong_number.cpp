#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int armstrong(int n)
{
    int count = 0, x = n;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    int sum = 0;
    x = n;
    int y = 0;
    for (int i = 0; i < count; i++)
    {
        y = x % 10;
        sum = sum + pow(y, count);
        x = x / 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int32_t main()
{
    fio;
    int n;
    cin >> n;
    int result = armstrong(n);
    if (result == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}