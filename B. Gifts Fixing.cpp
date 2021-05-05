#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+10;
const int inf=0x3f3f3f3f;
ll t,n,a[maxn],b[maxn],min_1,min_2,ans;
int main(){
	cin>>t;
	while(t--){
		min_1=inf;
		min_2=inf;
		ans=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			min_1=min(min_1,a[i]);
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
			min_2=min(min_2,b[i]);
		}
		for(int i=1;i<=n;i++){
			ans+=max(a[i]-min_1,b[i]-min_2);
		}
		cout<<ans<<endl;
	}
} 
