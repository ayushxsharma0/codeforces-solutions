#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;
        //using loops
        // int ans = 0 ;
        // int i = 0 ; int j = n ;
        // while(j>=i){
        //     j-- ;
        //     i++ ;
        //     ans++ ;
        // }
        int div = n/2 ;
        int rem = n%2 ;

        cout<<div+rem<<endl ;
    }
    return 0 ;
}