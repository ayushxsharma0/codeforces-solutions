#include <bits/stdc++.h>
using namespace std ;

bool check(long long mid,long long n,vector<long long> has, vector<long long> needed,long long k){
    long long sum = 0 ;

    for(int i = 0 ;i<n;i++){
        if(has[i] < mid*needed[i]){
            sum += mid*needed[i] - has[i] ;
        }
        if(sum > k){
            return false ;
        }
    }
    return true ;
}

int main(){
    long long n, k ;
    cin>>n>>k ;

    vector<long long> needed(n) ;
    vector<long long> has(n) ;

    for(auto &i : needed){
        cin>>i ;
    }

    for(auto &i : has){
        cin>>i ;
    }
    
    int ans = 0 ;

    //for a cookie every incredient should be used
    //as the cookie array is sorted the incredients at the start will exhaust first

    //using binary search we will take an increadient and check if we make that much cookies, do we have the required magic poweder, simple T.C = O(nlogn)

    long long i = 0; long long j = 2e9 +1 ;

    while(j>i+1){
        long long mid = i + (j-i >> 1) ;

        if(check(mid,n,has,needed,k)){
            i = mid ;
        }
        else{
            j = mid ;
        }
    }

    cout<<i<<endl ;
}