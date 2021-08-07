#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
const ll mod = 1e9 + 7 ;

void solve(){
	long C , N ;
	cin>>C>>N ;
	int a[N+3] ;
	long res[N+3][C+3];
	for(int i = 0 ; i <= N ; i++) cin>>a[i] ;
	for(int i = 0 ; i <= N ; i++){
		for(int j = 0 ; j <= C ; j++){
			if(j >= a[i]){
				res[i][j] = max(res[i][j-a[i]] + a[i] , res[i-1][j]);
			}
			else{
				res[i][j] = res[i][j-1] ;
			}
		}
	}
}

int main(){
	int t ;
	t = 1;
	while(t--){
		solve() ;
	}
	return 0 ;
}