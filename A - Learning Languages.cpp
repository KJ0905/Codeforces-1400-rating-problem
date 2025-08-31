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


void dfs(int i,vector<bool>&visited,vector<vector<int>>&adj){
    visited[i]=true;
    for(auto val:adj[i]){
        if(!visited[val]){
            dfs(val,visited,adj);
        }
    }
    return;
}
void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>>lang(m+1);
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x==0){lang[0].pb(i); continue;}
        while(x--){
            int k; cin>>k;
            lang[k].pb(i);
        }
    }
    vector<vector<int>>adj(n+1);
    for(int i=1;i<=m;i++){
        if(lang[i].size()==1 || lang[i].size()==0){continue;}
        int prev=lang[i][0];
        for(int j=1;j<lang[i].size();j++){
            int curr=lang[i][j];
            adj[prev].pb(curr); adj[curr].pb(prev);
        }
    }
    vector<bool>visited(n+1); int ans=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans++;
            dfs(i,visited,adj);
        }
    }
    if(lang[0].size()==n){cout<<ans-1+1<<endl; return;}
    cout<<ans-1<<endl;
}
int main(){
    KUNAL
        solve();
}