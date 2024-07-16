#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    cin>>str ;

    unordered_map<char,int> mp ;

    for(auto i : str){
        if(i != '+'){
            mp[i] ++ ;
        }
    }

    string ans = "";
    
    for(int i =1;i<4;i++){
        char c = '0'+i ;
        int num = mp[c] ;

        while(num--){
            ans += c ;
            ans += '+' ;
        }
    }
    string anss = ans.substr(0,ans.size()-1) ;
    cout<<anss ;
    return 0 ;
}