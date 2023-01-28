#include <bits/stdc++.h>
#include <climits>
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
    int m;
    cin>>m;
    int index=-1;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            index=i;
        }
    }
    cout<<index;
}