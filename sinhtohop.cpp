#include<iostream>
using namespace std ;
int n , k , a[100] ;
bool check ;

void init(){
    cin>>n>>k ;
    for(int i = 1 ; i<= k ; i++)
    a[i] = i ;
    check = false ;
}

void display(){
    for(int i = 1 ; i <= k ; i++)
    cout<<a[i]<< ' ' ;
    cout<<endl ;
}

// bool check(){
//     for(int i = 1 ; i <= k ;i++){
//         if(a[i] != n - k + i) return false ;
//     }
//     return true ;
// }

void next(){
    int i = k ; 
    while(a[i] == n - k + i) i--;
    if(i >  0){
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++)
        a[j] = a[i] + j - i ;
    }
    else check = true ;
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        init();
    while(!check){
        display();
        next();
        }
    }
    
    return 0 ;
}