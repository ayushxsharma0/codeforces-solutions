#include <bits/stdc++.h>
using namespace std ;

int main(){
    int x ;
    cin>>x ;

    vector<int> vec(x) ;
    for(int i =0;i<x;i++){
        cin>>vec[i] ;
    }
    int ans = 1 ;
    int i=0,j=0 ;

    while(j+1<x){
        if(vec[j+1] > vec[j]){
            j++ ;
            ans = max(ans,j-i+1) ;
        }
        else{
            j++;
            i = j ;
        }
    }
    cout<<ans ;
    return 0 ;
}