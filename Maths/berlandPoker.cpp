#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n,m,k ;

        cin>>n>>m>>k ;

        int cards = n/k ;

        if(m==0){
            cout<<0<<endl ;
            continue ;
        }
        //if jokers are less than the number of cards each player gets, then a player can get maximum jokers
        if(cards >= m){
            cout<<m<<endl ;
            continue;
        }

        //we have to give maximum card to a player and distribute the remaining among all players

        int rem = m - cards ;

        int div = rem/(k-1) ;
        int x = rem%(k-1) ;

        if(x >0){
            div++ ;
        }

        cout<<(cards-div)<<endl ;
    }
    return 0 ;
}