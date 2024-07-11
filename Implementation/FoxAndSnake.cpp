#include <bits/stdc++.h>
using namespace std ;

int main(){
    int r,c ;
    cin>>r>>c ;

    vector<vector<char>> vec ;
    // int j = 0 ;
    // int i = 0;
    // while(i<r){
        
    //     if(j == 0){
    //         //direction is forward
    //         if(i %2 == 0){
    //         //the row is even
    //             vec[i][j] = '#' ;
    //             j++ ;
    //             i++ ;
    //             for(int k = j;k<c;k++){
    //                 vec[i][k] = '#' ;
    //             }
    //             j = c-1 ;
    //         }
    //         else{
    //             //row is odd
    //             for(int k = j;k<c;k++){
    //                 vec[i][k] = '#' ;
    //             }
    //             i++ ;
    //         }
    //         j = c-1 ;
    //     }
    //     else if(j == c-1){  //direction is backward

    //         if(i % 2 ==0){
    //             //the row is even
    //             vec[i][j] = '#' ;
    //             j-- ;
    //             i++ ;
    //             for(int k = j;k>=0;k--){
    //                 vec[i][k] = '#' ;
    //             }
    //             j = 0 ;
    //         }
    //         else{
    //             //odd row
    //             for(int k = j;k>=0;k--){
    //                 vec[i][k] = '#' ;
    //             }
    //             i++ ;
    //         }
    //         j = 0;
    //     }
    // }

    //create 4 types of needed vectors
    vector<char> v1,v2,v3,v4 ;
    
    for(int i=0;i<c;i++){
        v1.push_back('#') ;

        if(i == c-1){
            v2.push_back('#') ;
        }else{
            v2.push_back('.') ;
        }

        v3.push_back('#') ;

        if(i == 0){
            v4.push_back('#') ;
        }else{
            v4.push_back('.') ;
        }
    }
    bool flag = true ;
    int i = 0;

    while(i<r){
        //row is even and direction is forward

        if(i %3 == 0 and i != 0){
            vec.push_back(v4) ;
        }
        vec.push_back(v1) ;
        vec.push_back(v2) ;
        vec.push_back(v3) ;
        i+= 3 ;
    }

    //to print the snake
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<vec[i][j] ;
        }
        cout<<endl ;
    }
    cout<<endl ;
    return 0 ;
}