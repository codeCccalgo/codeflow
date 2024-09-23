#include<bits/stdc++.h> 
#define ff first 
#define ss second 
#define int long long 
using namespace std;
using PII = pair<int,int>; 
const int N = 2e5+10,mod=998244353; 
int n, k; 
int a[N];
int ksm(int x, int y) {
    int res=1;
    while(y) {
        if(y & 1) res = res * x % mod; 
        x = x * x % mod; 
        y >>= 1; 
    }
    return res; 
}
int co(int x) {
    return (x%mod+mod)%mod;
}
int dp[N][2]; // 0: 有不合法，1：全部合法  
void solve() {
    cin>>n>>k; 
    for(int i = 1; i <= n; ++ i ) cin >> a[i],a[i]+=a[i-1];
    map<int,int> mp;
    int su = 0, cu = 0;  
    mp[0]=1;
    dp[0][1]=dp[0][0]=0;
    
    for(int i = 1; i <= n; ++ i ) {
        // cout<<i<<' '<<su<<' '<<mp[a[i]-k]<<endl;
        dp[i][0]=co(su+mp[a[i]-k]); 
        dp[i][1]=co(ksm(2,i-1)-dp[i][0]); 
        su=co(su+dp[i][0]); 
        mp[a[i]]=co((mp[a[i]]+dp[i][1])%mod); 
    }
    cout<<co(dp[n][1]%mod+mod)%mod;
}
signed main() {    
    freopen("wk1.in", "r", stdin);  
    freopen("wk2.out", "w", stdout);  
    int ts = 1; 
    // cin >> ts; 
    while(ts -- ) solve(); 
    fclose(stdin);
    fclose(stdout);
    return 0;
}

/*


        
        
        
*/