
/*
idea: 
B1: sinh nhị phân 
B2: conver nhị phân -> mã Gray: tu trai qua phai
a[i] = 1 , thì a[i+1] = 0 ( ngược lại)
*/
#include<bits/stdc++.h>

using namespace std ;
int n , a[15] , x[15] ;
vector<vector<int> > ans ;

void init(){
    cin>>n ;
    ans.clear() ;
}

void convert(){
    for(int i = 1 ; i <= n ; i++){
        x[i] = a[i] ;
    }
    for(int i = 1 ; i < n ; i++){
        if(a[i] == 1){
            if(a[i+1] == 1) x[i+1] = 0;
            else x[i+1] = 1;
        }
    }
}

void display(){
    for(int i = 1; i <= n ; i++) cout<<x[i];
    cout<<' ' ;
}

void Try(int i){
    for(int j = 0 ; j <= 1; j++){
        a[i] = j ;
        if(i == n){
            convert() ;
            display() ;
        }
        else Try(i+1) ;
    }
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        init() ;
        Try(1) ;
        cout<<endl;
    }
    return 0 ;
}