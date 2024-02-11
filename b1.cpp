#include<bits/stdc++.h>
using namespace std;
#define int long long 


void solve(){

int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// find gcd of array using gcd function in c++
int gcds=arr[0];
for(int i=0;i<n;i++){
    gcds=__gcd(arr[i],gcds);
}
// maximum element is last element as array is sorted
int maxy=arr[n-1];

cout<<maxy/gcds<<"\n";
        
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