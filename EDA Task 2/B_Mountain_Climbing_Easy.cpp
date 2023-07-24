#include <bits/stdc++.h>
#include <cctype>
#include <string>
#include<array> 

#define ll long long
#define ld long double
#define ull unsigned long long
#define endl '\n'

#define forn(i, n) for(int i = 0; i < (n); ++i)
#define fore(i, l, r) for(int i = (l); i <= (r); ++i)
#define rof(i, n) for(int i = (n) - 1; i >= 0; --i)
#define rofe(i, l, r) for(int i = (r); i >= (l); --i)
#define forj(j, m) for(int j = 0; j < (m); ++j)
#define forje(j, l, r) for(int j = (l); j <= (r); ++j)
#define rofj(j, m) for(int j = (m) - 1; j >= 0; --j)
#define rofje(j, l, r) for(int j = (r); j >= (l); --j)
// #define size(arr) sizeof(arr)/sizeof(arr[0])

#define HGPA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

const double PI = acos(-1);

/* 

Problem State:


Note:
 

input:


output:


*/








int main()
{   
    HGPA;
    ll n;cin>>n;
    ll arr[n];
    forn(i,n)
        cin>>arr[i];
    
    ll counter = 0;
    ll res[n]={0};
    forn(i,n)
        res[i]++;
    
    forn(i,n-1){
        if (arr[i+1]-arr[i]>0){
            res[counter]++;
        }
        if (res[counter]>=3 && arr[i+1]-arr[i]<=0){
            counter++;
        }else if (arr[i+1]-arr[i]<=0){
            res[counter]=1;
        }
        

    }
    ll ans=0;
    forn(i,n){
        if (res[i]>=3){
            ans++;
        }
    }
    cout<<ans<<"\n";





}




