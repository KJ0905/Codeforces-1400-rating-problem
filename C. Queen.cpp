#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(i,j,m) for(int i=j;i<m;i++)
int mini=INT_MAX;
int maxi=INT_MIN;
ll lmini=INT64_MAX;
ll lmaxi=INT64_MIN;
#define pb push_back
#define mod 1000000007
#define inf 1e9
//freopen("guess.in","r",stdin);   freopen("billboard.out","w",stdout);
#define all(x) (x).begin(), (x).end()  //sort(all(vec)) instead of sort(vec.begin(), vec.end()).
#define al(x,n) x,x+n
//#define rall(x) (x).rbegin(), (x).rend()
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 
#define getsubstr(x,startingindex,length) x.substr(startingindex,length)
#define getsubst(x,startingindex) x.substr(startingindex) // to get substring from startingindex upto end.
// Conversion of int,float into string using to_string(intvalue)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define bitindll(val) __builtin_ctzll(val) 
// __builtin_ctzll(val) (val!=0) is a compiler-specific built-in function that counts the number of trailing zero bits in a long long integer val ,
//if val=16 then it returns 4 because there are four zero bits after the least significant set bit. 
#define bitind(val) __builtin_ctz(val) //for unsigned int (val!=0)
#define countsetbitsll(val) __builtin_popcountll(val) //Counts the number of 1s in the binary representation of a long long integer.
// __builtin_popcount(unsigned int) for unsigned int
// __builtin_popcountl(unsigned long) for unsigned long

vector<vector<int>>adj; vector<int>res;
void bfs(int root, vector<int>& ans){
    stack<pair<int,int>> s;  // {node, parent}
    s.push({root, 0});

    while(!s.empty()){
        auto [v, p] = s.top();
        s.pop();

        bool cur = true,enter=false;
        for(int u : adj[v]){
            if(u == p) continue;
            if(!enter){enter=true;}
            s.push({u, v});
           // cout<<p<<" "<<v<<" "<<u<<res[v]<<" "<<res[u]<<" ";
            if(res[v] == 0) cur = false;
            if(res[v] == 1 && res[u] == 0 && cur) cur = false;
            //cout<<cur<<endl;
        }
        if(!enter){
            if(res[v]==1){ans.pb(v);}
        }
        if(cur && enter) { ans.push_back(v);}
    }
}

void solve(){
    int n; cin>>n;
    adj.assign(n+1,vector<int>());
    res.assign(n+1,0);
    int root=-1;
    forn(i,1,n+1){
        int p,c; cin>>p>>c;
        res[i]=c; 
        if(p==-1){root=i; continue;}
        adj[i].pb(p),adj[p].pb(i);
    }
    vector<int>ans;
    bfs(root,ans);
   // cout<<ans.size()<<endl;
    if(ans.empty()){cout<<-1<<endl; return;}
    sort(all(ans));
    for(auto &val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    KUNAL
   //int t; cin>>t;
    int t=1;
    while(t--){
        solve();
    }
}