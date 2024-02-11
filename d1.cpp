#include<bits/stdc++.h>
using namespace std;
#define int long long 

// struct to store task
struct task{
    int startday;
    int endday;
    int magicvalue;
};

// comparator to sort task according to startday
bool comp(struct task &a,struct task &b){
    if(a.endday<b.endday)return true;
    else if(a.endday==b.endday){
        if(a.startday<b.startday)return true;
        return false;
    }
    return false;
}

void solve(){

int n;cin>>n;
vector<task>tsk(n);
for(int i=0;i<n;i++){
    int a,b,c;cin>>a>>b>>c;
    tsk[i].startday=a;
    tsk[i].endday=b;
    tsk[i].magicvalue=c;
}
// sort according to endday
sort(tsk.begin(),tsk.end(),comp);

// map to store dp states ,map is used beacuse coordinate can goes upto 10^9
// dp[i] is maximum magic we can earn before ith day
map<int,int>dp;
dp[0]=0;

int ans=0;

for(int i=0;i<n;i++){
    int startingday=tsk[i].startday;
    int endingday=tsk[i].endday;
    int magic=tsk[i].magicvalue;
    // binary search on sorted map to get neares task whose ending day is less than starting
    //day of ith task.
    auto it=dp.lower_bound(startingday);
    it--;

    ans=max(ans,it->second+magic);
    dp[endingday]=ans;
}

cout<<ans<<"\n";


        
}


int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }
}