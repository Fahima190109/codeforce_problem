 /*Bismillah hir rahmanir rahim*/
  #include<bits/stdc++.h>
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
    int n,q;
    cin>>n>>q;
   int a[n+5];
   a[0]=0;
    fr1(i,n){
      cin>>a[i];
    }
    int index=1;
    map<int,int>daan;
    map<int,int>daan1;
    map<int,int>baam;
    for(int i=2; i<=n; i++){
      if(a[index]<a[i]){
        daan[index]=1;
        daan1[index]=i;
        index=i;
      }
      else{
        baam[i]=1;
        index=index;
      }
    }
   
   while(q--){
      int a,k;
      cin>>a>>k;
      ll ans=0;
      /*first daan check*/
      if(baam[a]==1){
        ans=0;
        k=0;
      }
      else{
       if(k>=a-1&&a-1!=0){
         ans+=1;
         k=k-(a-1);
       }
       else{
         ans=0;
         k=k-(a-1);
       }
       
      }
      /*2nd daan check*/
      if(daan[a]==0&&k>0){
        ans+=k;
      }
      else if(k>0){
        ll baki=daan1[a]-a-1;
        if(baki<=k){
          ans+=baki;
          k=0;
        }
        else{
          ans+=k;
          k=0;
        }
      }
      cout<<ans<<endl;
    }         
 // cout<<endl;
    }

  return 0;}
