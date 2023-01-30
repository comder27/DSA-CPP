// You will be given a number N. You have to code a hollow diamond looking pattern.
// The output for N=5 is given in the following image.
// Input Format
// The input has only one single integer N.
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
    for (int i = 1; i <= n; i++) // rows= 2N-1
    {
        int j = 1;
        if(i==1){
            for(int j=1;j<=2*n-1;j++){
                if(j<=(2*n-1)/2){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }
        else if(i==(n)){
            for(int j=1;j<=2*n-1;j++){
                if(j<=((2*n-1)/2)+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else if(i>1 and i<n){
            for(int j=1;j<=2*n-1;j++){
                if(j==n-i+1){
                    cout<<"*";
                }
                else if(j==2*n-i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}