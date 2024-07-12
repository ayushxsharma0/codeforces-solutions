#include <bits/stdc++.h>
using namespace std ;

int main(){
    int x ;
    cin>>x ;

    vector<int> vec(x) ;
    for(int i =0;i<x;i++){
        cin>>vec[i] ;
    }

    //we need to get the initial position of maimum and the minimum height
    int maxii = -1 ;
    int minii = -1 ;
    int miniVal = INT_MAX ;
    int maxiVal = INT_MIN ;

    for(int i = 0;i<x;i++){
        if(miniVal >= vec[i]){
            miniVal = vec[i] ;
            minii = i ;
        }
        if(maxiVal < vec[i]){
            maxiVal = vec[i] ;
            maxii = i ;
        }
    }
    //now we have to move the minimum value to the end, and maximum values to the start
    int ans = 0 ;
    //to move minimum value
    ans += abs((x-1) - (minii)) ;
     
    //to move maximum value
    ans += abs(0 - maxii) ;
    
    //if both the value collide while swapping then we have to perform onr less operation
    if(maxii > minii){
        ans -= 1 ;
    }

    cout<<ans<<endl ;
    return 0 ;
}