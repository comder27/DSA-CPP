// You will be given a number N. You have to code a hollow diamond looking pattern.
// The output for N=5 is given in the following image.
// Input Format
// The input has only one single integer N.
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int N;
    cin>>N;
    for(int i=1;i<=(2*N-1);i++)//rows= 2N-1
    { if(i<=N){
        int j=1;
        while(j<=(2*N-1)){
           if(i>=2){
            if(j>N+1-i && j<N-1+i){
                    cout<<" ";
                    j++;
                    continue;
                }
            }
            cout<<"*";
            j++;

        }
        cout<<endl;
    }
    else{
         int j=1;
        while(j<=(2*N-1)){
           if(i<=2*N-2){
            if(j>i-N+1 && j<3*N-1-i){
                    cout<<" ";
                    j++;
                    continue;
                }
            }
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
    }
}