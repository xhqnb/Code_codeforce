#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
typedef long long ll;
int n,t,ans,l,r,v;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>v>>l>>r;
		ans=n/v;
		ans-=(r/v-l/v);
		if(l%v==0){
			ans--;
		}
		cout<<ans<<endl;
	}
	return 0;
} 
