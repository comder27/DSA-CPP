#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int n,x=0;
    cin>>n;
    int a[n];
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<1;
    }
    else{
        a[0]=0;
        a[1]=1;
        for(int i=2;i<=n;i++){
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[n];
        
       }
}