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

int primefactor(int n){
    int cnt=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cnt++; n/=i;
            }
        }
    }
    if(n>1){cnt++;}
    return cnt;
}
void solve(){
    int n; cin>>n;
    if((n%2!=0 && n!=1) || n==2){cout<<"Ashishgup"<<endl; return;}
    if(n==1){cout<<"FastestFinger"<<endl; return;}
    int cnt=0;
    while(n%2==0){
        cnt++;
        n/=2;
    }
    if(n==1){cout<<"FastestFinger"<<endl; return;}
    if(cnt>1){cout<<"Ashishgup"<<endl; return;}
    if(primefactor(n)>1){cout<<"Ashishgup"<<endl; return;}
    else{cout<<"FastestFinger"<<endl; return;}
}   
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        solve();
    }
}