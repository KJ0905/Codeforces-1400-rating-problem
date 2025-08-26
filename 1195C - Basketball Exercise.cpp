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
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	int n; cin>>n;
	ll a[n],b[n];
	forn(0,n){cin>>a[i];}
	forn(0,n){cin>>b[i];}
	vector<ll>dpprev(3),dpcurr(3);
	dpprev[0]=0,dpprev[1]=a[0],dpprev[2]=b[0];
	for(int i=1;i<n;i++){
		dpcurr[0]=max({dpprev[0],dpprev[1],dpprev[2]});
		dpcurr[1]=max(dpprev[0],dpprev[2])+a[i];
		dpcurr[2]=max(dpprev[0],dpprev[1])+b[i];
		dpprev=dpcurr;
	}
	cout<<max({dpprev[0],dpprev[1],dpprev[2]})<<endl;
}
int main(){
	KUNAL
		solve();
}
