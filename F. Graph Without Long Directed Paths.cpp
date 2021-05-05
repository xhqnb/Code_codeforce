#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int flag=0,n,k,a[maxn],b[maxn];
vector<int>mp[maxn];
void dfs(int pos){
//	cout<<1;
	for(int i=0;i<mp[pos].size();i++){
		int temp=mp[pos][i];
		if(b[temp]==b[pos]){
			flag=1;
			return;	
		}
		if(b[temp]==-1*b[pos])continue;
		b[temp]=-1*b[pos];
		dfs(temp);
	}
}
int main(){
	cin>>n>>k;
	for(int i=0;i<k;i++){
		int u,v;
		cin>>u>>v;
		mp[u].push_back(v);
		mp[v].push_back(u);
		a[i]=u;
	}
	b[1]=1;
	dfs(1);
	if(!flag){
		cout<<"YES"<<endl;	
		for(int i=0;i<k;i++){
			if(b[a[i]]==1)cout<<1;
			else cout<<0;
		}
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
} 
