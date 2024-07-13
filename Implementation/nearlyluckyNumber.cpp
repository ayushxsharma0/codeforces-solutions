#include <bits/stdc++.h>
using namespace std ;

int main(){
    string x ;
    cin>>x ;
    int cnt = 0;
    
    for(auto i : x){
        if(i == '4' or i == '7'){
            cnt++ ;
        }
    }
    
    if(cnt != 0 and (cnt == 4 or cnt == 7)){
        cout<<"YES"<<endl ;
    }
    else{
        cout<<"NO"<<endl ;
    }

    return 0 ;
}