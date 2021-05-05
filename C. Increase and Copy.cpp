#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf=0x3f3f3f3f;
ll n,t,min_,ans;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		min_=inf;
		for( ll i=1;i<=n;i++){
			ans=i+(n-i)/i-(n%i==0);
			if(ans<=min_){
				min_=ans;
			}else{
				break;
			}
		}
		cout<<min_<<endl;
	}
} 
