#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int A[q],k[q];
    for(int i=0;i<q;i++){
        cin>>A[i]>>k[i];
    }
    for(int i=0;i<q;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(A[i]%a[j]==0){
                count++;
            }
        }
        if(count>=k[i]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
   return 0;
}