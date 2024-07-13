#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    vector<int> vec(n) ;

    for(int i =0;i<n;i++){
        cin>>vec[i] ;
    }

    vector<int> ans(n) ;

    for(int i =0;i<n;i++){
        int num = vec[i] ;
        ans[num-1] = i+1 ;
    }

    for(auto i : ans){
        cout<<i<<" " ;
    }
    return 0 ;
}