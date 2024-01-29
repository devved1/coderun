#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
 int n;
 cin >> n;
 vector<int> a(n);
 for (int i = 0; i < n; ++i) {
  cin >> a[i];
 }
 sort(a.begin(), a.end());
 int ans = 0;
 int j = 0;
 for (int i = 0; i < n; ++i) {
  while (j < n && a[j] - a[i] <= 5) {
   ++j;
   ans = max(ans, j - i);
  }
 }
 
 cout << ans << endl;
}


int32_t main(){
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }
}