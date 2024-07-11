#include <bits/stdc++.h>
using namespace std ;

int main(){
    int frnds,bottles,mili,limes,slices,salt,nl,np ;
    cin>>frnds>>bottles>>mili>>limes>>slices>>salt>>nl>>np ;

    int total_drink = bottles*mili ;
    int total_slices = limes*slices ;

    int drinks = bottles*mili/nl ;
    
    int x = min(drinks,salt/np) ;
    int ans = min(x,total_slices) ;

    cout<<ans/frnds<<endl ;
    return 0 ;
}