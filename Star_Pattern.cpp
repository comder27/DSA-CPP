#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        if(i<=t/2+1){
        for(int j=1;j<=t;j++){
            if(j>=((t/2)-i+2) and j<=((t/2)+i)){
                cout<<"*"<<" ";
                   }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
        }
        else{
             for(int j=1;j<=t;j++){
            if(j>=(i-(t/2)) and j<=((3*t/2)+1-i)){
                cout<<"*"<<" ";
                   }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
        }
    }
}