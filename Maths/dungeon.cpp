#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int a,b,c ;

        cin>>a>>b>>c ;
        
        long long sum = a+b+c ;

        if(sum<7){
            cout<<"NO"<<endl ;
            continue;
        }
        long long k = sum/9 ;

        if(sum%9){
            cout<<"NO"<<endl ;
            continue;
        }
        if(a>=k and b>=k and c>=k){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0 ;
}