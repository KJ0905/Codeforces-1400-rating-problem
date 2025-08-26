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
	int arr[n];
	forn(0,n){cin>>arr[i];}
	vector<vector<int>>dp(n+1,vector<int>(3));
	for(int i=1;i<=n;i++){
		if(arr[i-1]==0){
			dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
			dp[i][1]=dp[i-1][1];
			dp[i][2]=dp[i-1][2];
		}
		if(arr[i-1]==1){
			dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
			dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
			dp[i][2]=dp[i-1][2];
		}
		if(arr[i-1]==2){
			dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
			dp[i][1]=dp[i-1][1];
			dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
		}
		if(arr[i-1]==3){
			dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
			dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
			dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});		
        }
	}
	cout<<n-max({dp[n][0],dp[n][1],dp[n][2]})<<endl;
}
int main(){
	KUNAL
		solve();
}