#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+10;
int n,r,a[maxn],b[maxn],ans=0;
int main(){
	cin>>n>>r;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			for(int j=max(1,i-r+1);j<=min(n,i+r-1);j++){
				b[j]=max(i,b[j]);
			}
		}
	}
	for(int i=1;i<=n;i=b[i]+r){
		if(b[i]==0){
			ans=-1;
			break;
		}
		ans++;
	}
	cout<<ans<<endl;
} 
