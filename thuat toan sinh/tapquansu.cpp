/*
idea : 
    sinh to hop 
    so sanh to hop truoc voi to hop sau
    so phan tu trung chinh la so thanh vien duoc nghi 
*/
#include<bits/stdc++.h>

using namespace std ;
int n , k , a[100] ;
set<int> res ;

void init(){
    res.clear() ;
    cin>>n>>k;
    for(int i = 1 ; i <= k ; i++){
        cin>>a[i] ;
        res.insert(a[i]) ;
    }
}

void solve(){
    int i = k ;
    while(a[i] == n - k + i ) i-- ;
    if(i > 0){
        a[i] += 1 ; res.insert(a[i]) ;
        for(int j = i + 1 ; j <= k ; j++){
            a[j] = a[i] + j - i ;
            res.insert(a[j]) ;
        }
        cout<<res.size() - k;
    }
    else{
        cout<<k ;
    }
    cout<<endl;
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        init() ;
        solve() ;
    }
    return 0 ;
}

// dad dang len ngay 7/8/2021
