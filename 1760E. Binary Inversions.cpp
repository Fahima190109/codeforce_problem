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
  #define MAX 1e10
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
   int n;
   cin>>n;
   int a[n];
   Vi vec,vect;
   fr0(i,n){
       cin>>a[i];
       vec.pb(a[i]);
       vect.pb(a[i]);
   }
   for(int i=0; i<n; i++){
       if(vec[i]==0){
           vec[i]=1;
           break;
       }
   }
    for(int i=n-1; i>=0; i--){
       if(vect[i]==1){
           vect[i]=0;
           break;
       }
   }
   ll sum=0,sum1=0,c=0,temp1=0,c1=0,temp2=0,temp3=0,c3=0;
   for(int i=n-1; i>=0; i--){
       if(vec[i]==0){
           c++;
       }
       else{
           temp1+=c;
       }
   }
     for(int i=n-1; i>=0; i--){
       if(vect[i]==0){
           c1++;
       }
       else{
           temp2+=c1;
       }
   }
    for(int i=n-1; i>=0; i--){
       if(a[i]==0){
           c3++;
       }
       else{
           temp3+=c3;
       }
   }
   ll p=max(temp1,temp2);
   cout<<max(p,temp3);
   cout<<endl;
 }
   
  return 0;}
