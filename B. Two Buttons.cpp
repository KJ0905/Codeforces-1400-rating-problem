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
	int n,m; cin>>n>>m;
	if(n<m){
		int ans=0;
		while(m>n){
			if(m%2!=0){
				ans+=2;
				m++;
			}
			else{ans++;}
			m/=2;
		}
		ans+=n-m;
		cout<<ans<<endl;
		return;
	}
	cout<<n-m<<endl;
}
int main(){
	KUNAL
		solve();
}
