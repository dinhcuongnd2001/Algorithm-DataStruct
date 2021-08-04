#include<iostream>
using namespace std; 
int n , a[100] ;
void init(){
    cout<<"nhao vao n : ";
    cin>>n ;
    for(int i = 1 ; i <= n ; i++)
    a[i] = 0;
}

void display(){
    for(int i = 1 ; i <= n ; i++)
    cout<<a[i]<<' ' ;
    cout<<endl ;
}

bool check(){
    for(int i = 1 ; i <= n ; i++)
    if(a[i] != 1) return false ;
    return true ;
}

void next(){
    int i = n ;
    while(a[i] == 1) i--;
    a[i] = 1 ;
    for(int j = i + 1; j <= n ; j++)
    a[j] = 0 ;
}

int main(){
    init() ;
    while(check() == false){
        display();
        next() ;
    }
    display();
    return 0 ;
}
