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

void solve(){

    int n,k;cin>>n>>k;
    int arr[n];
    forn(i,n)
        cin>>arr[i];
    int current=1;
    int good=0;
    forn(i,n){
        if (arr[i]==current){
            good++;
            current++;
        }
    }
    cout<<ceil(((double)n-good)/(double)k)<<"\n";
    

}






int main()
{   
    HGPA;
    int t;cin>>t;
    while(t--){
        solve();
    }




}




