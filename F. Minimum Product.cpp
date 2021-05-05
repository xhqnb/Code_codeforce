#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
int t;
ll	n,a,b,x,y;
int main(){
	cin>>t;
	while(t--){
		ll min_=1e18;
		cin>>a>>b>>x>>y>>n;
		if(n>=((a-x)+(b-y))){
			cout<<x*y<<endl;
			continue;
		}
		if(n>=(a-x)){
			min_=min(min_,x*(b+(a-x)-n));
			//cout<<"a:"<<min_<<endl;
		}else{
			min_=min(min_,(a-n)*b);
			//cout<<"b:"<<min_<<endl;	
		}
		if(n>=(b-y)){
			min_=min(min_,y*(a+(b-y)-n));
		//	cout<<"c:"<<min_<<endl;
		}else{
			min_=min(min_,(b-n)*a);
		//	cout<<"d:"<<min_<<endl;
		}
		cout<<min_<<endl;
	}
} 
