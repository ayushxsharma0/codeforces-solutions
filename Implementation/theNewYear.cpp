#include <bits/stdc++.h>
using namespace std ;

int main(){
    int x,y,z ;
    cin>>x>>y>>z ;

    //let the point where the meet be p
    //so distance from rach of the friends home will be |x-p|+|y-p|+|z-p|
    //now we have to make that minimum 
    

    //just realised that the meating points should be at one of the friend's house
    int ans = INT_MAX ;

    int distance = 0 ;

    //if they meet at x
    distance += abs(y-x) + abs(z-x) ;
    ans = min(ans,distance) ;
    distance = 0 ;

    //if the meet at y
    distance += abs(x-y) + abs(y-z) ;
    ans = min(ans,distance) ;
    distance = 0 ;

    //if the meet at z
    distance += abs(x-z) + abs(y-z) ;
    ans =  min(ans,distance) ;
    distance = 0 ;
    
    cout<<ans<<endl ;
    return 0 ;
}