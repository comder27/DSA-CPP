#include <bits/stdc++.h>
using namespace std;

void gen_subarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}

void maximum_sum_subarray(int a[], int n)
{   int wi=0,wj=0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            if (max_sum < sum)
            {
                max_sum = sum;
                wi=i;
                wj=j;
            }
        }
    }
    cout<<"Maximum sum subarray is: "<<endl;
    for(int i=wi;i<=wj;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    gen_subarray(a, n);
    maximum_sum_subarray(a,n);

    return 0;
}