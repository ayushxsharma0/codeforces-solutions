#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int a,b,n ;
    cin>>a>>b>>n ;
    int cnt = 0 ;
    while (a<=n and b<=n)
    {
        if(a>=b){
            b += a ;
        }else{
            a += b;
        }
        cnt++ ;
    }
    cout<<cnt<<endl ; ;
    }
    return 0 ;
}