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
	int n; cin>>n;
	string s; cin>>s;
	map<ll,ll>m;
	for(int i=0;i<n;i++){
		ll a=(ll)(s[i]-'0');
		if(a==0 || a==1){continue;}
		if(a==2 || a==3 || a==5 || a==7){m[a]++;}
		if(a==4){m[2]+=2; m[3]++;}
		if(a==6){m[3]++; m[5]++;}
		if(a==8){m[2]+=3; m[7]++;}
		if(a==9){m[2]++; m[3]+=2; m[7]++;}
	}
	vector<int>ans;
	for(auto &val:m){
		while(val.second--){ans.push_back(val.first);}
	}
	for(int i=ans.size()-1;i>=0;i--){
		cout<<ans[i];
	}
	cout<<endl;
}	
int main(){
	KUNAL
		solve();
}