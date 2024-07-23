#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;

    int ans = 0 ;

    int n = s.size() ;
    reverse(s.begin(),s.end()) ;
    bool flag = false ;
    for(int i =0;i<n;i++){
        if(s[i] == '1' and i != n-1){
            flag = true ;
        }
        if(i%2 == 0 and i != n-1){
            ans++ ;
        }
        if(i==n-1 and flag and i%2 == 0){
            ans++ ;
        }
    }

    cout<<ans<<endl ;

    return 0 ;
}