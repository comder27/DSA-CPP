#include <bits/stdc++.h>
using namespace std;
int main()
{   int sum;
    cout << "Enter the sum: ";
    cin>>sum;
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0,j=n-1;
    while(i<j){
    if(a[i]+a[j]==sum){
        cout<<a[i]<<","<<a[j]<<endl;
        i++;j--;
    }
    else if(a[i]+a[j]>sum){
        j--;
    }
    else if(a[i]+a[j]<sum){
        i++;
    }
    }
    return 0;
}
