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
        for(int j=1;j<=i;j++){
            if(i==1){
                cout<<i;
            }
            else if(i==2){
            cout<<i<<"  ";
            }
            else{
                if(j==1 or j==i){
                    cout<<i<<"  ";
                }
                else{
                    cout<<"0"<<"  ";
                }

            }
        }
            cout<<endl;
    }
}