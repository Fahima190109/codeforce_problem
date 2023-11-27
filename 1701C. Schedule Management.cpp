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
map<ll,ll>m;
int check(ll mid, int x,int n){
ll total=0;
ll rest_work=0;
ll korte_parbe=0;
   for(int i=1; i<=x; i++){
   ll sum=min(mid,m[i]);//tar porficient kaj
   ll rest=(mid-sum)/2;//tar kaj sese baki time a se koita kaj krte parbe 
   rest_work+=m[i]-sum;//bs ar time theke tar koita kaj baki
   korte_parbe+=rest;//koita kaj krte parbe
   }
//cout<<mid<<endl;
   if(korte_parbe>=rest_work){
   return 1;
   }
   else{
   return 0;
   }
}
int main(){
  int t;
  cin>>t;
  read:
  while(t--){
  int n,x;
  cin>>x>>n;
  int a[n];
  fr0(i,n){
    cin>>a[i];
    m[a[i]]++;
  }
 ll low=0,high=n*2;
ll ans=0;
 while(low<=high){
ll  mid=(high+low)/2;
 if(check(mid,x,n)==1){
   ans=mid;
   high=mid-1;
 }
 else{
 low=mid+1;
 }
 }

cout<<ans;
m.clear();
cout<<endl;
  }
  return 0;
}
 

 
