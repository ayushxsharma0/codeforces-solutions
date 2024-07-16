#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    cin>>str ;

    char r = str[0] ;
    char s = str[1] ;

    vector<string> vec(5) ;

    for(int i = 0;i<5;i++){
        cin>>vec[i] ;

        if(vec[i][0] == r or vec[i][1] == s){
            printf("YES") ;
            return 0 ;
        }
    }

    cout<<"NO" ;
    return 0 ;
}