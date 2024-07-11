#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>> t ;

    while(t--){
        int x ;
        cin>>x ;

        int times = 0 ;
        vector<int> ans ;
        while(x){
            int num = x %10 ;

            if(num != 0){
                
                int p = round(pow(10,times)) ;
                ans.push_back(p*num) ;
            }
            times++ ;
            x = x/10 ;
        }
        cout<<ans.size()<<endl ;
        for(auto i : ans){
            cout<<i<<" " ;
        }
        cout<<endl ;
        ans.clear() ;
    }
    return 0 ;
}