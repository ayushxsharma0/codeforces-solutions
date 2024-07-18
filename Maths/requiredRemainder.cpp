#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int x,y,n ;
        cin>>x>>y>>n ;

        //using loop
        // for(int i = n;i>=0;i--){
        //     if(i%x == y){
        //         cout<<i<<endl ;
        //         break ;
        //     }
        // }

        int rem = n%x ;
        if(rem == y){
            cout<<n<<endl ;
            continue ;
        }
        int sub ;
        if(rem>y){
            sub = rem - y ;
            cout<<n-sub<<endl ;
        }else{
            sub = x- y ;
            cout<<n-(rem+sub)<<endl ;
        }
        
        
    }
    return 0 ;
}