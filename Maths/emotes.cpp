#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long n,m,k ;
    cin>>n>>m>>k ;

    vector<long long> vec(n) ;

    for(int i = 0;i<n;i++){
        cin>>vec[i] ;
    }
    sort(vec.begin(),vec.end()) ;
    unsigned long long ans = 0 ;
    
    long long x = m/(k+1) ;

    ans += x*vec[n-2] ;
    ans+= (m-x)*vec[n-1] ;

    cout<<ans<<endl ;

    return 0 ;
}