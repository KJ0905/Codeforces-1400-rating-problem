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


bool ispossible(ll mid,ll arr[],ll k,ll n){
	ll op=0;
	for(int i=(n/2);i<n;i++){
		op+=max((ll)0,mid-arr[i]);
	}
	return op<=k;
}
void solve(){
	ll n,k; cin>>n>>k;
	ll arr[n];
	forn(0,n){cin>>arr[i];}
	sort(arr,arr+n);
	ll s=0,e=2e9; ll ans=0;
	while(s<=e){
		ll mid=(s+e)>>1;
		if(ispossible(mid,arr,k,n)){
			s=mid+1;
			ans=mid;
		}
		else{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
}	
int main(){
	KUNAL
	//int t; cin>>t;
	//while(t--){
		solve();
	//}
}