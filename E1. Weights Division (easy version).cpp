#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
//inline ll read(){
//   ll s=0,w=1;
//   char ch=getchar();
//   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
//   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
//   return s*w;
//}
struct edge{
	ll to,w,next;
}e[maxn*2];
struct node{
	ll cnt,val;
	bool operator<(const node b)const{
		return (val-val/2)*cnt<(b.val-b.val/2)*b.cnt;		
	}
};
ll t,n,s,count_,cnt_2,head[maxn],sum,ans;
priority_queue<node> pq;
void add(ll u,ll v,ll w){
	e[count_]={v,w,head[u]};
	head[u]=count_++;
}

ll dfs(ll u,ll fa){
	ll cnt=0;
	for(int i=head[u];i;i=e[i].next){
		int to=e[i].to;
		if(to!=fa){
			ll temp=dfs(to,u);
			sum+=temp*e[i].w;
			pq.push({temp,e[i].w});
			cnt_2++;		
			cnt+=temp;
		}
	}
	if(cnt==0){
		return 1;
	}else{
		return cnt;
	}
}
void init(){
	ans=0;
	sum=0;
	count_=1;
	cnt_2=0;
	memset(head,0,sizeof(head));
//	memset(cc,0,sizeof(cc));
//	memset(ww,0,sizeof(ww));
	while(!pq.empty()) pq.pop();	
}

int main(){
	scanf("%lld",&t);
	while(t--){
		init();
		scanf("%lld %lld",&n,&s);
//		cin>>n>>s;
		for(ll i=0;i<n-1;i++){
			ll u,v,w;
			scanf("%lld %lld %lld",&u,&v,&w);
//			cin>>u>>v>>w;
			add(u,v,w);
			add(v,u,w);
		}
		dfs(1,0);
//		for(int i=0;i<cnt_2;i++){
//			sum+=cc[i]*ww[i];
//			pq.push({cc[i],ww[i]});
//		}
		while(sum>s){
			ans++;
			node now=pq.top();
			pq.pop();
			sum-=(now.val-now.val/2)*now.cnt;
			pq.push({now.cnt,now.val/2});
		}
//		cout<<ans<<endl;
		printf("%lld\n",ans);
	}
	
} 
