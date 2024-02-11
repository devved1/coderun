#include<bits/stdc++.h>
using namespace std;
#define int long long 


void solve(){

int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(n<=2){
    cout<<0<<"\n";return;
}
// if n=3 and middle element is odd then -1
if(n==3){
    if(arr[1]%2==1){
        cout<<-1<<"\n";return;
    }
}
//if all elements from ind-2,n-1 are 1
// then ans also -1
bool ok=false;
for(int i=1;i<n-1;i++){
    if(arr[i]!=1){
        ok=true;break;
    }
}
if(!ok){
    cout<<-1<<"\n";return;
}

int ans=0;
for(int i=1;i<n-1;i++){
    // to find ceil of n/x just do (n+x-1)/x
    ans=ans+(arr[i]+1)/2;
}

cout<<ans<<"\n";
        
}


int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}