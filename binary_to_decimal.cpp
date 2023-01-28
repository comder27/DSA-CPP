#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int n,x,m=10;
    int d=0;
    cin>>n;
    int count=0;
    while(x!=0){
        x=n/m;
        m=m*10;
        count++;
    }
    x=0;
    for(int i=0;i<count;i++){
        x=n%10;
        d=d+x*(pow(2,i));
        n=n/10;     
           }
           cout<<d;
}