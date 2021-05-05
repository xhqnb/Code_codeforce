#include<bits/stdc++.h>
using namespace std;
int t,n,c;
int main(){
	cin>>t;
	while(t--){
		int flag=0;
		cin>>n>>c;
		for(int i=1;i<=n;i++){
			int a,b,x;
			cin>>x>>a>>b>>x;
			if(a==b){
				flag=1;
			}
		}
		if(flag&&c%2==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
