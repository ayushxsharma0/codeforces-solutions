#include <bits/stdc++.h>
using namespace std;
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define mod 1000000007
#define pb push_back
#define l_b lower_bound
#define u_b upper_bound
#define _fastio  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
*/

int main()
{
    _fastio;
    int t;
    cin >> t;
    vector<unsigned long long> vec(t) ;

    for(int i = 0;i<t;i++){
        cin>>vec[i] ;
        unsigned long long x = vec[i] ;
        unsigned long long div = x/7 ;
        if(x>14 and x%7 != 0 and div%2==0){
            cout<<"YES"<<endl ;
        }else{
            cout<<"NO"<<endl ;
        }
    }

    return 0 ;
}