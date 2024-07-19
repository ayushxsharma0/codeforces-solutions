#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n  ;
        cin>>n ;

        vector<int> vec(n) ;

        for(auto &x : vec){
            cin>>x ;
        }

        int evenIndex = 0 ;
        int oddIndex = 0 ;

        for(int i = 0 ;i<n;i++){
            if(i%2 == 0 and vec[i]%2){
                evenIndex++ ;
            }
            if(i%2 and vec[i]%2 == 0){
                oddIndex++ ;
            }
        }

        if(evenIndex == oddIndex){
            cout<<evenIndex<<endl ;
        }else{
            cout<<-1<<endl ;
        }
    }
    return 0 ;
}