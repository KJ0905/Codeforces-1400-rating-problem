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

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
bool islcm(long long a, long long b,ll x) {
   
    return ((a / gcd(a, b)) * b)==x; 
}
void solve(){
    ll x; cin>>x;
    ll a=1,b=x;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            if(islcm(i,x/i,x)){
                if(lmini>min(lmini,max(i,x/i))){
                    a=i,b=x/i;
                    lmini=min(lmini,max(i,x/i));
                }
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}   
int main(){
    KUNAL
        solve();
}