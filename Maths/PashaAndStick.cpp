#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long x ;
    cin>>x ;

    int ans = 0 ;
    if(x%2){
        cout<<ans<<endl ;

        return 0 ;
    }

    ans = x/4 ;

    if(x%4==0){
        ans-- ;
    }

    cout<<ans<<endl ;

    return 0 ;
}