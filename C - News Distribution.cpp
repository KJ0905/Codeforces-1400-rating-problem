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

vector<int>visited1;
vector<int>visited;
int ans[500006];
vector<vector<int>>adj;
void dfs(int i,int &l){
    visited[i]=1; l++;
    for(auto &v:adj[i]){
        if(visited[v]==-1){
            dfs(v,l);
        }
    }
    return;
}
void mark(int i,int l){
    if(visited1[i]){return;}
    visited1[i]=1;
    ans[i]=l;
    for(auto &v:adj[i]){
        
            mark(v,l);
        
    }
}
void solve(){
    int n,m; cin>>n>>m;
    adj=vector<vector<int>>(n+1);
    for(int i=0;i<m;i++){
        int k; cin>>k;
        if(k<1){continue;}
        if(k==1){ int a; cin>>a; continue;}
        int prev; cin>>prev;
        for(int j=1;j<k;j++){
            int curr; cin>>curr;
            adj[prev].pb(curr);  adj[curr].pb(prev);
            prev=curr;
        }
    }
    visited=vector<int>(n+1,-1);
    visited1=vector<int>(n+1,0);
    for(int i=1;i<=n;i++){
        if(visited[i]==-1){
            int l=0;
            dfs(i,l);
            mark(i,l);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}  
int main(){
    KUNAL
        solve();
}
