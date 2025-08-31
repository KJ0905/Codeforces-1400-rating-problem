#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(j,m) for(int i=j;i<m;i++)
int mini=INT_MAX;
int maxi=INT_MIN;
ll lmini=INT64_MAX;
ll lmaxi=INT64_MIN;
#define mod 1000000007
#define inf 1e9
//freopen("guess.in","r",stdin);   freopen("billboard.out","w",stdout);
#define all(x) (x).begin(), (x).end()  //sort(all(vec)) instead of sort(vec.begin(), vec.end()).
#define al(x,n) x,x+n
//#define rall(x) (x).rbegin(), (x).rend()
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 

void solve(){
    int n; cin>>n;
    int a[n]; forn(0,n){cin>>a[i];}
    if(n==1){cout<<0<<endl; return;}
    vector<vector<int>>dp(n,vector<int>(2));
    int penalty=0; dp[0][0]=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<=dp[i-1][0] && dp[i-1][1]==0){dp[i][0]=a[i]; continue;}
        else if(a[i]>dp[i-1][0] && dp[i-1][1]==0){dp[i][1]=a[i],dp[i][0]=dp[i-1][0]; continue;}
        if(dp[i-1][0]>=a[i] && dp[i-1][1]>=a[i]){
            if(dp[i-1][0]>dp[i-1][1]){dp[i][1]=a[i]; dp[i][0]=dp[i-1][0];}
            else{dp[i][0]=a[i]; dp[i][1]=dp[i-1][1];}
        }
        else if(dp[i-1][0]<a[i] && dp[i-1][1]<a[i]){
            if(dp[i-1][0]>dp[i-1][1]){dp[i][1]=a[i]; dp[i][0]=dp[i-1][0];}
            else{dp[i][0]=a[i]; dp[i][1]=dp[i-1][1];}
            penalty++;
        }
        else if(dp[i-1][0]>=a[i] && dp[i-1][1]<a[i]){
            dp[i][1]=dp[i-1][1]; dp[i][0]=a[i];
        }
        else{
            dp[i][0]=dp[i-1][0]; dp[i][1]=a[i];
        }
    }
    cout<<penalty<<endl;
}
int main(){
    KUNAL
   int t; cin>>t;
    while(t--){
        solve();
   }
}