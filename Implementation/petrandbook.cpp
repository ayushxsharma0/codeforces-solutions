#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    vector<int> vec(7) ;

    for(int i =0;i<7;i++){
        cin>>vec[i] ;
    }
    int ans = 0 ;
    int i = 0 ;
    while(n){
        n -= vec[i] ;
        i++ ;
        ans ++ ;
        i = i%7 ;
        if(n<=0){
            break ;
        }
    }
    ans %=7 ;
    if(ans == 0){
        cout<<7 ;
    }else{
        cout<<ans ;
    }
    return 0 ;
}