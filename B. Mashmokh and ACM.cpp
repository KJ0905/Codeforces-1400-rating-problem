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
#define pb push_back 

void solve(){
    int n,k; cin>>n>>k;
    //vector<vector<ll>>dp(k+1,vector<ll>(n+1));
    vector<ll>prev(n+1),curr(n+1);
    forn(1,n+1){prev[i]=1;}
    ll m=1e9+7;
    for(int i=2;i<=k;i++){
        for(int j=1;j<=n;j++){
            for(int t=1;t*t<=j;t++){
                if(j%t==0){
                    if((j/t) !=t){
                        (curr[j]+=prev[t]+prev[j/t])%=m;
                    }
                    else{(curr[j]+=prev[t])%=m;}
                }
            }
        }
        prev=curr;
        curr=vector<ll>(n+1);
    }
    ll ans=0;
    forn(1,n+1){
        ans+=prev[i];
        ans%=m;
    }
    cout<<ans<<endl;
}  
int main(){
    KUNAL
        solve();
}