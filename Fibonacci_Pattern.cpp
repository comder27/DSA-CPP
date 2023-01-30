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
    int a1=0,a2=1,a3=0;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=i;j++){
            if(i==1){
                cout<<a1<<" ";
                a1++;
            }
            else if(i==2){
                cout<<a2<<" ";
            }
            else{
                a3=a1+a2;
                a1=a2;
                a2=a3;
                cout<<a3<<" ";
                
            }
        }
        cout<<endl;
    }
}