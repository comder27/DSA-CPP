// Print "lowercase" if user enters a character between 'a-z' , 
//Print "UPPERCASE" is character lies between 'A-Z'
// and print "Invalid" for all other characters like $,.^# etc.
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
   cin>>ch;
   if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;
   }
    else if(ch>='A' && ch<='Z'){
        cout<<"UPPERCASE"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}