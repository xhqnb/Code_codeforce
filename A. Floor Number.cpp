#include<bits/stdc++.h>
using namespace std;
int t,n,x;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		if(n<=2)cout<<1<<endl;
		else{
			n-=2;
			cout<<n/x+1+(n%x!=0)<<endl;		
		}
	}	
}
//1 2
//3 4 5 6 7
//8 9 10 11 12
//13 14 15 16 17
//18 19 20 21 22
