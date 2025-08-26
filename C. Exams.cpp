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
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	int n; cin>>n;
	vector<pair<int,int>>v(n);
	for(auto & val:v){
		cin>>val.first>>val.second;
	}
	sort(all(v));
	int ans=v[0].second,prev=v[0].second;
	for(int i=1;i<n;i++){
		if(v[i].first>=prev){ans=v[i].first;}
		if(v[i].second>=prev){ans=min(ans,v[i].second);}
		prev=ans;
	}
	cout<<ans<<endl;
}
int main(){
	KUNAL
		solve();
}