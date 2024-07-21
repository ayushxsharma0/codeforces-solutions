#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    vector<vector<int>> v(n,vector<int>(3)) ;
    long long sum1 = 0 ;
    long long sum2 = 0 ;
    long long sum3 = 0 ;
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>v[i][j] ;
            if(j==0){
                sum1 += v[i][j] ;
            }
            else if(j == 1){
                sum2 += v[i][j] ;
            }
            else{
                sum3 += v[i][j] ;
            }
        }
    }

    if(!sum1 and !sum2 and !sum3){
        cout<<"YES"<<endl ;
    }
    else{
        cout<<"NO"<<endl ;
    }
    return 0 ;
}