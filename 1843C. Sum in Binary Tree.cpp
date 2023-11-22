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
cin >> t;
while(t--){
        ll n;
cin >> n;
ll ans = n;
while(n>=2){
    n = n/2;
    ans+= n;
}
cout << ans;

cout << endl;}
return 0;}





 
