#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin>>t ;

    while(t--){
        long long w,h ;

        cin>>w>>h ;
        long long ans = -111 ;
        for(long long i =0;i<4;i++){
            long long k ;
            cin>>k ;
            vector<long long> v(k) ;
            for(long long j = 0;j<k;j++){
                cin>>v[j] ;
            }
            ans = max(ans, (v[k-1] - v[0]) * (i<2? h:w)) ;
        }

        cout<<ans<<endl ;
    }
    return 0 ;
}