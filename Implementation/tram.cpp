#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int cnt = 0 ;
    int ans = -1 ;
    for(int i=0;i<n;i++){
        int a,b ;
        cin>>a>>b ;
        cnt -= a ;
        cnt += b ;
        ans = max(cnt,ans) ;
    }

    cout<<ans ;
    return 0 ;
}