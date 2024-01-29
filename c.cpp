#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;cin>>n;
    int L=1;
    int R=1;
    
    while(n%R==0){
        R++;
    }

    int size=R-L;
    cout<<size<<"\n";
}


int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}