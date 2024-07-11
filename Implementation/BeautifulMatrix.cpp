#include <bits/stdc++.h>
using namespace std ;

int main(){

    vector<vector<int>> vec(5,vector<int>(5,0)) ;
    vector<int> point ;
    //take the matrix as input
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>vec[i][j] ;
            if(vec[i][j] == 1){
                point.push_back(i) ;
                point.push_back(j) ;
            }
        }
    }

    //now we need to bring the 1 to (2,2) as per the 0th indexing
    int moves = 0 ;
    int currRow = point[0] ;
    int currCol = point[1] ;
    
    moves += abs(currRow - 2) ;
    moves += abs(currCol - 2) ;

    cout<<moves<<endl ;
    return 0 ;
}