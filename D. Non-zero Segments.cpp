#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
typedef long long ll;
ll n,sum[maxn],cnt=0;
map<ll,int>mp;
int main(){
	cin>>n;
	sum[0]=0;
	mp[0]=1;
	for(int i=1;i<=n;i++){
		cin>>sum[i];
		sum[i]+=sum[i-1];
		if(mp[sum[i]]>0){
			cnt++;
			sum[i]-=sum[i-1];
			mp.clear();
			mp[0]=1;
		}
		mp[sum[i]]++;
	}
	cout<<cnt<<endl;
}
