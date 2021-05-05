#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+10;
typedef long long ll;
ll a[maxn],b[maxn],n,m,ans=0;
char mp[maxn][maxn];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
			if(mp[i][j]=='*'){
				a[i]++;	
				b[j]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(mp[i][j]=='*'){
				ans+=((a[i]-1)*(b[j]-1));
			}	
		}
	}
	cout<<ans<<endl;
} 
