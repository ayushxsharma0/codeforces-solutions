#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;

        vector<int> vec ;
        int half = n/2 ;

        if(n%4){
            cout<<"NO"<<endl ;
            continue ;
        }
        int sum1 = 0 ; int sum2 = 0 ;
        for(int i = 1;i<=half;i++){
            vec.push_back(i*2) ;
            sum1 += (i*2) ;
        }

        for(int i =1;i<half;i++){
            vec.push_back((i*2) -1) ;
            sum2 += ((i*2) -1) ;
        }
        vec.push_back(sum1 - sum2) ;

        cout<<"YES"<<endl ;
        for(auto i : vec){
            cout<<i<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}