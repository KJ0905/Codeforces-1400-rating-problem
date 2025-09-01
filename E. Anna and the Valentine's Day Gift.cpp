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
    int n,m; cin>>n>>m;
    int a[n];
    forn(0,n){cin>>a[i];}
    int cnt=0;
    vector<int>z;
    for(int i=0;i<n;i++){
        int ld=a[i]%10; int k=0;
        while(ld==0){
            k++;
            a[i]/=10; ld=a[i]%10;
        }
        if(k!=0){z.pb(k);}
        while(a[i]!=0){
            cnt++; a[i]/=10;
        }
    }
    sort(all(z));
    for(int i=z.size()-2;i>=0;i-=2){
        cnt+=z[i];
    }
    if(cnt>=m+1){cout<<"Sasha"<<endl;}
    else{cout<<"Anna"<<endl;}
}
int main(){
    KUNAL
   int t; cin>>t;
    while(t--){
        solve();
   }
}