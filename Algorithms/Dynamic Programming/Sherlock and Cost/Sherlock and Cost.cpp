 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long

 void fun(ll* b,ll n)
 {
     ll T[n][2]={};
     T[0][0]=0;
     T[0][1]=0;

     for(ll i=1;i<n;i++)
     {
         T[i][0]=max( (T[i-1][0]) , (T[i-1][1] + abs(b[i-1]-1)) );

         T[i][1]=max( (T[i-1][0]+ abs(b[i]-1)) , (T[i-1][1] + abs(b[i-1]-b[i])) );
     }

     cout<<max( T[n-1][0] , T[n-1][1] );
 }

 int main()
 {
     ll t;cin>>t;
     while(t--)
     {
         ll n;cin>>n;
         ll b[n];
         for(ll i=0;i<n;i++)cin>>b[i];

         fun(b,n);cout<<endl;
     }
     return 0;
 }

