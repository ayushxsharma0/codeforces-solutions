#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n ; 
        cin>>n ;

        vector<int> vec(n) ;
        int even = 0 ;
        int odd = 0 ;
        for(auto &i : vec){
            cin>>i ;
            if(i%2){
                odd++ ;
            }else{
                even++ ;
            }
        }
        //for odd sum, the number of odd terms must be odd
        //it is possible when odd terms are odd (or there is a even term to create a odd term)

        if(odd != 0 and odd%2== 1){
            cout<<"YES"<<endl ;
        }
        else if(odd > 0 and even > 0){
            cout<<"YES" <<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0 ;
}