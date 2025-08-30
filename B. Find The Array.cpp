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
   ll n; cin>>n;
   ll a[n];
   forn(0,n){cin>>a[i];}
   ll b[n];
   for(ll j=0;j<n;j++){
    for(ll i=1;i<=31;i++){
        if((1<<i) >=a[j] && (1<<i) <= 3*a[j]){
            b[j]=(1<<i); break;
        }
    }
   }
   for(ll i=0;i<n;i++){
    cout<<b[i]/2<<" ";
   }
   cout<<endl;

}  
int main(){
    KUNAL
   int t; cin>>t;
    while(t--){
        solve();
   }
}