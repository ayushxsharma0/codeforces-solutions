#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n,x,y ;
    cin>>n>>x>>y ;

    vector<int> vec(n) ;

    for(auto &i : vec){
        cin>>i ;
    }
    
    for(int i = 0;i<n;i++){
        bool flag = true ;
        for(int k=-x;k<=y;k++){
            if(k == 0) continue;
            if(i+k < 0) continue;
            if(i+k >n-1) continue;

            if(vec[i] >= vec[i+k]){
                flag = false ;
            }
        }
        
        if(flag){
            cout<<i+1<<endl ;
            return 0 ;
        }
    }
    return 0 ;
}