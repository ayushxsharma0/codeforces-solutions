#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int r,c ;
        cin>>r>>c ;

        int sq = r*c ;

        int ans = 0 ;
        ans = sq/2 ;
        ans += sq%2 ;
        cout<<ans<<endl ;
    }
    return 0 ;
}