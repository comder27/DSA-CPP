#include <bits/stdc++.h>
using namespace std;
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
    int j;
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        for (j = i - 1; j >= 0 and a[j] > key; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}