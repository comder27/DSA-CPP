#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int a,b,c;
    cin>>a>>b>>c;
    int root1,root2;
    int D=(b*b - 4*a*c);
    if(D==0){
        cout<<"Real and Equal"<<endl;
    }
    else if(D>=0){
        cout<<"Real and Distinct"<<endl;
    }
    else{
        cout<<"Imaginary"<<endl;
    }
    root1= (-b + sqrt(D))/(2*a);
    root2= (-b - sqrt(D))/(2*a);
    if(D>=0){
        cout<<root2<<" "<<root1;
    }
   
}