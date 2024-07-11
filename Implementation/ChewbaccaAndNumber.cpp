#include <bits/stdc++.h>
using namespace std ;

int main(){
    string  str ;
    cin>>str ;

    int n = str.size() ;
    string ans = "" ;

    for(int i = 0;i<n;i++){
        if(i == 0 and str[i] == '9'){
            ans += '9' ;
            continue ;
        }

        if((str[i] - '0') >= 5){
            ans += 9 - (str[i] - '0') + '0' ;
        }
        else{
            ans += str[i] ;
        }
    }
    cout<<ans<<endl ;
    return 0 ;
}