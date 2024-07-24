#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;

    bool first;  //true is first char is uppercase
    bool flag1 = true ;

    if(isupper(s[0])){
        first = true ;
    }else{
        first = false ;
    }

    for(int i =1;i<s.size();i++){
        if(islower(s[i])){
            flag1 = false ;
            break ;
        }
    }

    //we need to check the two conditions

    //first if first one is lowercase and rest is uppercase  and second if all letters are in upper case
    if(first == false and flag1 == true or (first and flag1) ){
        
        for(int i = 0;i<s.size();i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]) ;
            }
            else{
                s[i] = toupper(s[i]) ;
            }
        }
        cout<<s<<endl ;
        return 0 ;
    }
    cout<<s<<endl ;
    return 0 ;
}