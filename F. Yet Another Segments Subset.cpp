#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e3+10;
struct node{
	int l,r;
}a[maxn];
//bool cmp(node a,node b){
//	return a.l<b.l;
//}
vector<int>mp[maxn*2];
inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
int t,n,b[maxn],cnt,dp[maxn*2][maxn*2],cnt_;
int way(){
	for(int i=1;i<=cnt;i++){
		for(int j=0;j<cnt;j++){
			int pos=i+j-1,ans=0;
			if(pos>=cnt) break;
			dp[j][pos]=max(dp[j+1][pos],dp[j][pos-1]);
			for(auto k:mp[j]){
//				cout<<"sad";
				if(pos==k)ans=1;
				else if(pos>k)dp[j][pos]=max(dp[j][pos],dp[j][k]+dp[k+1][pos]);
			}
			dp[j][pos]+=ans;
		}
	}
}
void init(int n){
	for(int i=0; i<n+2; i++){
		mp[i].clear();
		for(int j=0;j<n+2;j++){
			dp[i][j]=0;
		}	
	}
}
int main(){
	t=read();
	while(t--){
		cnt=0;
		cnt_=0;
		n=read();
		for(int i=1;i<=n;i++){
			a[i].l=read();
			a[i].r=read();
			b[cnt++]=a[i].l;
			b[cnt++]=a[i].r;
		}
		sort(b,b+cnt);
		cnt=unique(b,b+cnt)-b;//ÀëÉ¢»¯ 
		init(cnt);
		for(int i=1;i<=n;i++){
			a[i].l=lower_bound(b,b+cnt,a[i].l)-b;
			a[i].r=lower_bound(b,b+cnt,a[i].r)-b;
//			c[cnt_++]={a[i].l,a[i].r};
			mp[a[i].l].push_back(a[i].r);
		}
//		sort(c,c+cnt_,cmp);
		way();
		cout<<dp[0][cnt-1]<<endl;
	}
}
