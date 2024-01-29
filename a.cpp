#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int a,b;cin>>a>>b;
    int ans=a+b+(a*b);
    if(ans==111){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}


int32_t main(){
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }
}