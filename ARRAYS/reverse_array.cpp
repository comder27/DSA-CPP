// Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that reverses the array. Print the values in reversed array.

// 1.It reads a number N.
// 2.Take Another N numbers as input and store them in an Array.
// 3.Reverse the elements in the Array.
// 4.Print the reversed Array.

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
    
int32_t main(){
    fio;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    for(int i=0;i<=n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}