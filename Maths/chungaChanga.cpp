#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long x,y,z ;
    cin>>x>>y>>z ;

    long long ans = 0 ;
    ans += x/z ;
    x = x%z ;
    ans += y/z ;
    y = y%z ;
    long long g ;
    if(x+y >= z){
        g = max(x,y) ;
        g = z-g ;
        ans += (x+y)/z ;
        cout<<ans<<" "<<g ;
        return 0 ;
    }else{
        cout<<ans<<" 0" ;
        return 0 ;
    }
}