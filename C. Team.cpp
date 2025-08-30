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
    int n,m; cin>>n>>m;
    if(n==0 && m==1){cout<<1<<endl; return;}
    if(n==0 && m==2){cout<<"11"<<endl; return;}
    if(n==1 && m==0){cout<<0<<endl; return;}
    if(n==2 && m==0){cout<<-1<<endl; return;}
    if(n==0 && m==3){cout<<-1<<endl; return;}
    if(m%2==0){
        int minreqn=(m/2)-1, maxreqn=m+1;
        if(minreqn>n || maxreqn<n){cout<<-1<<endl; return;}
        if(minreqn==n){
            cout<<"11";
            while(n--){
                cout<<"011"; m-=2;
            }
            cout<<endl; return;
        }
        while(true){
            if((m%2==0 && n==(m/2)-1) || (m<=0 || n<=0)){break;}
            if((m%2!=0 && n==(m/2)) || (m<=0 || n<=0)){break;}
            cout<<"0"; n--;
            if((m%2==0 && n==(m/2)-1) || (m<=0 || n<=0)){break;}
            if((m%2!=0 && n==(m/2)) || (m<=0 || n<=0)){break;}
            cout<<"1"; m--;
        } 
        if(n!=0 && m==0){cout<<"0"; cout<<endl; return;}
        while(n--){
            cout<<"110"; m-=2;
        }
        while(m--){cout<<"1";}
        cout<<endl; return;
    }
    else{
        int minreqn=(m/2), maxreqn=m+1;
        if(minreqn>n || maxreqn<n){cout<<-1<<endl; return;}
        string s;
        if(minreqn==n){
            while(n--){
                cout<<"110"; m-=2;
            }
            while(m--){cout<<"1";}
            cout<<endl; return;
        }
        while(true){
            if((m%2==0 && n==(m/2)-1) || (m<=0 || n<=0)){break;}
            if((m%2!=0 && n==(m/2)) || (m<=0 || n<=0)){break;}
            cout<<"0"; n--;
            if((m%2==0 && n==(m/2)-1) || (m<=0 || n<=0)){break;}
            if((m%2!=0 && n==(m/2)) || (m<=0 || n<=0)){break;}
            cout<<"1"; m--;
        } 
        if(n!=0 && m==0){cout<<"0"; cout<<endl; return;}
        while(n--){
            cout<<"110"; m-=2;
        }
        while(m--){cout<<"1";}
        cout<<endl; return;
    }
}  
int main(){
    KUNAL
        solve();
}