#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    if(n<=5){
        cout<<1<<endl ;
        return 0 ;
    }
    int diff = n/5 ;
    int rem = n %5 ;

    rem ? diff+=1 : diff+=0 ;

    cout<<diff ;
    return 0 ;
}