#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current_sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            current_sum++;
        }
        else{
            ans=max(ans,current_sum);
            current_sum=0;
        }
    }
    ans=max(ans,current_sum);
    cout<<ans<<"\n";
}


int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}