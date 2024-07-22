#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long n ;
    cin>>n ;

    while(n--){
        long long x ;
        cin>>x ;

        if(x%2){
            cout<<x/2<<endl ;
        }else{
            cout<<(x/2) - 1<<endl ;
        }
    }
    return 0 ;
}