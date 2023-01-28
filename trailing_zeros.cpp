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
    int a,x=n,i=1,count=0;
    while(a!=0){
        a=(n/pow(5,i));
        i++;
        count=count+a;
    }
    cout<<count;
}