#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    char ch;
    int count=0;
    ch=cin.get();
    while(ch!='$'){
        count++;
        ch=cin.get();
    }
    cout<<count;
}