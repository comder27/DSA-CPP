#include <bits/stdc++.h>
using namespace std;

void targetSum(int a[],int n,int tg){
    sort(a,a+n);
           for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==tg){
                    cout<<a[i]<<" and "<<a[j]<<endl;
                }
            }
           }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int tg;
    cin>>tg;
    targetSum(a,n,tg);

    return 0;
}