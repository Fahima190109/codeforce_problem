/*Allah knows which is good for me so remain patient and faith in Allah*/
 /*Bismillah hir rahmanir rahim*/
 /*Innama Asku bassi Woa Hujni Illallah*/
  #include<bits/stdc++.h>
  #include <iostream>
  #include <string>
  #include<deque>
  #define ll long long
  #define mp make_pair
  #define Vi vector<int>
  #define Vll vector<ll>
  #define Pii pair<int, int>
  #define Pll pair<ll, ll>
  #define I insert
  #define E erase
  #define B back
  #define C clear
  #define SZ size
  #define F first
  #define S second
  #define pb push_back
  #define fr1(i,n) for(int i=1;i<=n;i++)
  #define fr0(i,n) for(ll i=0;i<n;i++)
  #define rfr(i,n) for(int i=n-1;i>=0;i--)
  # define M_PI  3.14159265358979323846
  #define Max 10000000
  const int MOD=1e9+7;
  bool primes[10000000];
  using namespace std;
  bool cmp(const pair<int,int>& a, const pair<int,int>& b)
  {   if(a.second==b.second) return a.first<b.first;
        return a.second <b.second;
    }

int main(){
int t;
cin>>t;
read:
while(t--){
 ll n,m;
 cin>>n>>m;
 if(n==m){
    cout<<"YES"<<endl;
    goto read;
 }
 if(n%3==0){
    queue<ll>q;
    q.push(n/3);
    q.push(2*n/3);
    while(!q.empty()){
            ll x=q.front();
        if(x==m){
            cout<<"YES"<<endl;
            goto read;
        }
        if(x%3==0){
                q.pop();
         q.push(x/3);
         q.push(2*x/3);

        }
        else if(x%3!=0){
            q.pop();
        }
    }
 }
cout<<"NO";

cout<<endl;
}

  return 0;
}


 
