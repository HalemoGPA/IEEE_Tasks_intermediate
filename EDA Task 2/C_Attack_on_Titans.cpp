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
    int n;cin>>n;
    vector<int> v;
    set<int> S;
    set<int> :: iterator it;
    int arr[3][n];
    forn(i,3){
        forj(j,n){
            cin>>arr[i][j];
        }
    }
    int freqArr[500000]={0};
    forn(i,3){
        S.clear();
        forj(j,n){
            S.insert(arr[i][j]);
            
        }
        for(int x:S){
            // cout<<x<<" ";
		    freqArr[x]++;
	    }
        // cout<<"\n";
        
    }
    forn(i,500000){
        if (freqArr[i]>=3){
            v.push_back(i);
        }
    }
    if (v.size()==0){
        cout<<-1<<"\n";
        return 0;
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<"\n";
    
   




}




