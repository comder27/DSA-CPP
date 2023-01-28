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
    int x,m=10,count=0,d=0;
    while(x!=0){
        x=n/m;
        count++;
        m=m*10;
    }
    x=0;
    for(int i=0;i<count;i++){
        x=n%10;
        d=d+x*(pow(10,(count-i-1)));
        n=n/10;
    }
    cout<<d;
}