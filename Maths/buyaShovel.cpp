#include <bits/stdc++.h>
using namespace std ;

int main(){
    int x,n ;
    cin>>x>>n ;

    int times = 1 ;
    long long z ;
    while(1){
        z = times*x ;
        if(z%10 == n or z%10 == 0){
            break ;
        }        
        times++ ;
    }
    cout<<times<<endl ;
}