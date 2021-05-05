#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+10;
const int inf=0x3f3f3f3f;
ll t,n,a[maxn],b[maxn],max_,pos,ans=0;
int main(){
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		max_=-1;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>pos;
			a[pos]++;
		}
		for(int i=2;i<=2*n;i++){
			ans=0;
			for(int j=1;j<(i+1)/2;j++){
				if(i-j<0||i-j>n)continue;
				ans+=min(a[j],a[i-j]);
			}
			if(i%2==0){
				ans+=a[i/2]/2;
			}
			max_=max(max_,ans);
		}
		cout<<max_<<endl;
	}
} 
