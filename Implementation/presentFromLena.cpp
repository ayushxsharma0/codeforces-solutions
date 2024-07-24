#include <bits/stdc++.h>
using namespace std ;

void printon(vector<vector<int>> vec, int num){
    for(int i = 0;i<vec.size();i++){
        int x = vec[i].size() ;
            int sz = num - x ;
            sz /= 2 ;
            int p = sz ;
            while(p--){
                cout<<"  " ;
            }
        for(int j = 0;j<vec[i].size();j++){
            
            if(j != x-1){
                cout<<vec[i][j]<<" " ;
            }
            else{
                cout<<vec[i][j] ;
            }
            
        }
        cout<<endl ;
    }
}

int main(){
    int n ;
    cin>>n ;

    int num = 2*n + 1 ; //number of lines
    vector<vector<int>> vec ;
    int x = num/2 ;
    int i =0 ;
    for(;i<=x;i++){
        vector<int> v ;
        int j = i+ 1;
        //for increasing
        for(int k = 0;k<j;k++){
            v.push_back(k) ;
        }
        //for decreasing
        for(int k = j-2;k>=0;k--){
            v.push_back(k) ;
        }
        vec.push_back(v) ;
    }
    //top n lines are done
    int idx = x-1 ;

    while(idx>=0){
        vec.push_back(vec[idx--]) ;
    }
    printon(vec,num) ;

    return 0 ; 
}  