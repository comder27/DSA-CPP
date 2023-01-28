// Raj is a very smart kid who recently started learning computer programming.
//  His coach gave him a cyclic array A having N numbers, and he has to perform Q operations
// on this array. In each operation the coach would provide him with a number X.
// After each operation, every element of the cyclic array would be replaced by the sum of
// itself and the element lying X positions behind it in the cyclic array. All these
//  replacements take place simultaneously. For example, if the cyclic array was [a, b, c, d],
//  then after the operation with X = 1, the new array would be [a+d, b+a, c+b, d+c].
// He needs to output the sum of the elements of the final array modulus 10^9+7.
// He made a program for it but it's not very efficient. You know he is a beginner,
// so he wants you to make an efficient program for this task because he doesn't want to
// disappoint his coach.

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
    int n;
    cin >> n;
    int a[n], z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }

    int x,y;
    for (int i = 0; i < q; i++)
    {
        x = b[i];
        for (int j = 0; j < n; j++)
        {
            if (j < x)
            {
                y = n - x + j;
                z[j] = a[j] + a[n-x+j];
            }
            else
            {
                z[j] = a[j] + a[j - x];
            }
        }
        for(int k=0;k<n;k++){
            a[k]=z[k];
        }
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    cout<<sum%mod;
}