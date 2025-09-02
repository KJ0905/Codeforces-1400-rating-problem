#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
//#define ld long double
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

bool possible(int mid,vector<pair<int,int>>&seg){
    int l=0,r=0;
    for(auto &val:seg){
         l=max(l-mid,val.first);
         r=min(r+mid,val.second);
        if(l>r){return false;}
    }
    return true;
}
void solve(){
    int n; cin>>n;
    vector<pair<int,int>>seg(n);
    forn(0,n){
        int x,y; cin>>x>>y;
        seg[i]={x,y};
    }
    int s=0,e=1e9;int ans=0;
    while(s<=e){
        int mid=(s+e)>>1;
        if(possible(mid,seg)){
            ans=mid; e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
   int t; cin>>t;
    while(t--){
        solve();
   }
}