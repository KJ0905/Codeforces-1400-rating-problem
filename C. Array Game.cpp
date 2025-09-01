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
//#define rall(x) (x).rbegin(), (x).rend()
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 

void solve(){
    int n,k; cin>>n>>k;
    vector<ll>a(n);
    forn(0,n){cin>>a[i];}
    if(k>=3){cout<<0<<endl; return;}
        sort(all(a)); ll ans=a[0];
        for(int i=0;i<n-1;i++){
            ll c=a[i+1]-a[i];
            ans=min(ans,c);
        }
        if(k==1){cout<<ans<<endl; return;}
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                ll dif=abs(a[i]-a[j]);
                ll pos=lower_bound(a.begin(),a.end(),dif)-a.begin();
                if(pos<n){ans=min(ans,a[pos]-dif);}
                if(pos>0){ans=min(ans,dif-a[pos-1]);}
            }
        }
        cout<<ans<<endl;
}
int main(){
    KUNAL
   int t; cin>>t;
    while(t--){
        solve();
   }
}