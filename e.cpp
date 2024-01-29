#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    for(int i=m;i<n;i++){
        if(s[i]=='?'){         // replacing ? with s[i-m] 
            s[i] = s[i-m];
            continue;
        }  
        int x = i-m; 
        while(x>=0 && s[x]=='?'){    // If s[i-m] is ? then all behind with m gap are ?, therefore replacing them with s[i]
            s[x] = s[i];
            x -= m;
        }
    }
    
    int cnt_zero=0,cnt_one=0;
    vector<int> f;
    // counting zero, ones and ? of first m sized substring to eliminate the last ? marks remaining
    for(int i=0;i<m;i++){
        if(s[i]=='0') cnt_zero++;
        else if(s[i]=='1') cnt_one++; 
        else f.push_back(i); 
    }

    // populating all of the remaining ? with appropriate value to have stability if possible
    for(int i=0;i<f.size();i++){
        int temp = f[i];
        char x = cnt_zero>=cnt_one ? '1':'0'; 
        while(temp<n){
            s[temp] = x;
            temp+=m;
        }
        if(x=='0') cnt_zero++;
        else cnt_one++;
    }
    // after this our string is converted into a binary string with 0 and 1 only
    
    // simply checking if m stable or not
    cnt_zero=0,cnt_one=0;
    for(int i=0;i<n;i++){
        if(i>=m){
            if(cnt_zero!=cnt_one){
                cout << "NO\n";
                return;
            }
            if(s[i-m]=='0') cnt_zero--;
            else cnt_one--;
        }
        if(s[i]=='0') cnt_zero++;
        else cnt_one++;
    }
    if(cnt_zero==cnt_one) cout << "YES\n";
    else cout << "NO\n";
}
 
int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}