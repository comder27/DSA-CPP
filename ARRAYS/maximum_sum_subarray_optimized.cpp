#include <bits/stdc++.h>
using namespace std;

void max_sum_sumarray(int a[], int n)
{
    int cum_sum[n] = {0};
    int max_sum = INT_MIN;
    int wi, wj;
    for (int i = 0; i < n; i++)
    {
        cum_sum[i] += cum_sum[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            sum = cum_sum[j] - cum_sum[i - 1];
            if (max_sum < sum)
            {
                max_sum = sum;
                wi = i;
                wj = j;
            }
        }
    }
    cout << "Maximum sum subarray is: ";
    for (int i = wi; i <= wj; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Maximum sum is: " << max_sum << endl;
}

int main()
{
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max_sum_sumarray(a, n);

    return 0;
}