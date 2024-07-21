#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long a,b,c ;
    cin>>a>>b>>c ;

    long long sum = abs(a) + abs(b) ;

    if(sum == c){
        cout<<"Yes"<<endl ;
    }
    else if(sum > c){
        cout<<"No"<<endl ;
    }
    else if(sum < c and (c-sum)%2 == 0){
        cout<<"Yes"<<endl ;
    }
    else{
        cout<<"No"<<endl ;
    }

    return 0 ;
}