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
	int a[n],b[n];
	forn(0,n){cin>>a[i];}
	forn(0,n){cin>>b[i];}
	int c[n];
	forn(0,n){c[i]=a[i]-b[i];}
	sort(c,c+n);
	ll ans=0;
	for(int i=0;i<n;i++){
		if(c[i]<=0){continue;}
		int j=upper_bound(c,c+n,-c[i])-c;
		ans+=(ll)(i-j);
	}
	cout<<ans<<endl;
}
int main(){
	KUNAL
		solve();
}