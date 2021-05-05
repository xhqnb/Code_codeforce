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
	ll to,w,next,c;
}e[maxn*2];
struct node{
	ll cnt,val;
	bool operator<(const node b)const{
		return (val-val/2)*cnt<(b.val-b.val/2)*b.cnt;		
	}
};
ll t,n,s,count_,head[maxn],sum,ans,sum1[maxn*10],sum2[maxn*10],cnt1,cnt2;
priority_queue<node> pq1,pq2;
void add(ll u,ll v,ll w,ll c){
	e[count_]={v,w,head[u],c};
	head[u]=count_++;
}

ll dfs(ll u,ll fa){
	ll cnt=0;
	for(int i=head[u];i;i=e[i].next){
		int to=e[i].to;
		if(to!=fa){
			ll temp=dfs(to,u);
			sum+=temp*e[i].w;
			if(e[i].c==1)pq1.push({temp,e[i].w});
			else
			pq2.push({temp,e[i].w});		
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
	ans=1e18;
	sum=0;
	count_=1;
	cnt1=0;
	cnt2=0;
	sum1[0]=0;
	sum2[0]=0;
	memset(head,0,sizeof(head));
//	memset(cc,0,sizeof(cc));
//	memset(ww,0,sizeof(ww));
	while(!pq1.empty()) pq1.pop();
	while(!pq2.empty()) pq2.pop();	
}

int main(){
	scanf("%lld",&t);
	while(t--){
		init();
		scanf("%lld %lld",&n,&s);
//		cin>>n>>s;
		for(ll i=0;i<n-1;i++){
			ll u,v,w,c;
			scanf("%lld %lld %lld %lld",&u,&v,&w,&c);
//			cin>>u>>v>>w;
			add(u,v,w,c);
			add(v,u,w,c);
		}
		dfs(1,0);
//		for(int i=0;i<cnt_2;i++){
//			sum+=cc[i]*ww[i];
//			pq.push({cc[i],ww[i]});
//		}
		while(!pq1.empty()){
			node x1=pq1.top();
			pq1.pop();
			sum1[++cnt1]=(x1.val-x1.val/2)*x1.cnt;//记录减少量
            sum1[cnt1]+=sum1[cnt1-1];//维护前缀和
            if(sum-sum1[cnt1]<=s)break;
            x1.val/=2;
            if(x1.val>0)pq1.push(x1);
            
//			cout<<"Asd";
		}
		while(!pq2.empty()){
			node x2=pq2.top();
			pq2.pop();
			sum2[++cnt2]=(x2.val-x2.val/2)*x2.cnt;//记录减少量
            sum2[cnt2]+=sum2[cnt2-1];//维护前缀和
            if(sum-sum2[cnt2]<=s)break;
            x2.val/=2;
            if(x2.val>0)pq2.push(x2);
            
		}
		for(ll i=0;i<=cnt1;i++){
			ll d=sum-sum1[i];
			ll l=0,r=cnt2;
			ll pos=1e17;
			while(l<=r){
				ll mid=(l+r)>>1;
				if(d-sum2[mid]<=s){
					pos=mid;
					r=mid-1;
				}else{
					l=mid+1;
				}
			}
			ans=min(ans,i*1+pos*2);
		}
//		cout<<ans<<endl;
		printf("%lld\n",ans);
	}
	
} 
