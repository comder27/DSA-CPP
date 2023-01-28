#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        if(n1>=n2 && n1>=n3){
            cout<<n1;
        }
         else if(n2>=n1 && n2>=n3){
            cout<<n2;
        }
        else{
            cout<<n3;
        }
    }
