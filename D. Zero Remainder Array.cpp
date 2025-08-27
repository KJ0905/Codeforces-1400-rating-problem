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

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    forn(0,n){cin>>v[i];}
    sort(all(v));
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        if(v[i]<=k && v[i]%k!=0){v[i]=k-v[i]; m[v[i]]++; continue;}
        ll rem=v[i]%k;
        if(rem==0){v[i]=0; continue;}
        v[i]=k-rem;
        m[v[i]]++;
    }
    sort(all(v));
    ll x=INT64_MIN;
    for(auto &val:m){
        ll a=(val.second-1)*k+val.first;
        x=max(x,a);
    }
    if(x==INT64_MIN || x==0){cout<<0<<endl; return;}
    cout<<x+1<<endl;
}	
int main(){
	KUNAL
	int t; cin>>t;
	while(t--){
		solve();
	}
}