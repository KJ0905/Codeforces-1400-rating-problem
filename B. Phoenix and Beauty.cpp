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
    int n,k; cin>>n>>k;
    vector<int>v(n);
     map<int,int>m;
    forn(0,n){cin>>v[i];m[v[i]]++;}
    if(m.size()>k){cout<<-1<<endl; return;}
    int last=0;
    for(auto &val:m){
        last=val.first;
    }
    int d=10000/k;
    cout<<d*k<<endl;
    while(d--){
        for(auto &val:m){
            cout<<val.first<<" ";
        }
        if(k>m.size()){
            int a=k-m.size();
            while(a){
                cout<<last<<" ";
                a--;
            }
        }
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