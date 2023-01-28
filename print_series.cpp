#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int n1,n2;
    cin>>n1>>n2;
    int count=0,i=0,x;
    while(count!=n1){
        i++;
        x=3*i+2;
        if(x%n2==0){
            continue;
        }
        else{
            cout<<x<<endl;
        }
        count++;
    }
}