#include <bits/stdc++.h>
using namespace std ;

int check(vector<unsigned long long> vec, unsigned long long x,unsigned long long h){
    int n = vec.size() ;
    unsigned long long sum = x ;
    for(int i = 0;i<n-1;i++){
        //we also have to take care of overlapping situations
        sum += min(x,vec[i+1]-vec[i]) ;
    }
    if(sum>=h){
        return 1 ;
    }
    return -1 ;
}

void solve(){
    unsigned long long n,h ;
    cin>>n>>h ;
    vector<unsigned long long> vec(n) ;

    for(int i =0;i<n;i++){
        cin>>vec[i] ;
    }

    //the strength of poison will lie between 1 and h, so we need to binary search the answer between them
    //using linear search
    // unsigned long long ans = LONG_LONG_MAX ;
    // for(int i = 1;i<=h;i++){
    //     //check for the first valid i
    //     if(check(vec,i,h) == 1){
    //         ans = i ;
    //         break ;
    //     }
    // }

    //using binary search
    unsigned long long i = 1 ; unsigned long long j = 1e18 ;

    while(j>=i){
        unsigned long long mid = i + (j-i)/2 ;

        if(check(vec,mid,h) == 1){
            //the answer is valid so move to left half
            j = mid-1 ;
        }
        else{
            i = mid+1 ;
        }
    }

    cout<<j+1<<endl ;
}

int main(){
    int t ;
    cin>>t ;

    while(t--){
        solve() ;
    }
    return 0 ;
}