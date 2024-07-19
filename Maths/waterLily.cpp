#include <bits/stdc++.h>
using namespace std ;

int main(){
    long double h,l ;
    cin>>h>>l ;

    //let the total depth be x
    //so, (x+h)^2 = x^2 + l^2
    
    long double h2 = h * h ;
    long double l2 = l * l ;
    
    long double x = (l2 - h2)/(2*h)  ;
    cout<<setprecision(14) ;
    cout<<x<<endl ;
}