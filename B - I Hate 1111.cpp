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
	int n;cin>>n;
/*Since gcd(11,111)=1, by the Chicken McNugget Theorem, all numbers greater than 1099 can be written as a sum of 11 and 111
. We can use brute force to find the answer to all values less than or equal to 1099 and answer yes for all other numbers.*/
	/*if(n>1099){
		cout<<"YES"<<endl;
		return;
	}*/
	if(n<11){cout<<"NO"<<endl;}
	else{
		while(true){
			if(n<111 || n%11==0){
				if(n%11==0 && n>=0){
				   cout<<"YES"<<endl;
				   return;
			    }
			    cout<<"NO"<<endl; return;
			}
			n-=111;
		}
	}
}
int main(){
	KUNAL
	int t; cin>>t;
	while(t--){
		solve();
	}
}