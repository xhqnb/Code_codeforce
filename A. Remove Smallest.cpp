#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+10;
int t,n,a[maxn],max_;
int main(){
	cin>>t;
	while(t--){
		max_=-1;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(int i=2;i<=n;i++){
			max_=max(max_,a[i]-a[i-1]);
		}
		if(max_>1){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
} 
