// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int n,x=n,m=10;
    int os=0,es=0;
    cin>>n;
    int count=0;
    while(x!=0){
        x=n/m;
        m=m*10;
        count++;
    }
    for(int i=1;i<=count;i++){
        x=n%10;
        if(i%2!=0){
            os=os+x;
            n=n/10;
        }
        else{
            es=es+x;
            n=n/10;
        }

    }
    cout<<os<<endl;
    cout<<es;
    }