#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int x,y ;
        cin>>x>>y ;

        int maxi = max(x,y) ;
        int mini = min(x,y) ;

        if(2*mini > maxi){
            cout<<4*mini*mini<<endl ;
        }else{
            cout<<maxi*maxi<<endl ;
        }
    }
    return 0 ;
}