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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    int x = 0, y = 0, neg = 0, pos = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] > b[i]) {
        x += a[i];
      } else if (a[i] < b[i]) {
        y += b[i];
      } else {
        neg += (a[i] < 0);
        pos += (a[i] > 0);
      }
    }
    int ans = -1e9;
    for (int i = -neg; i <= pos; ++i)
      ans = max(ans, min(x + i, y + (pos - neg - i)));
    cout << ans << '\n';
}
int main(){
    KUNAL
   int t; cin>>t;
    while(t--){
        solve();
   }
}