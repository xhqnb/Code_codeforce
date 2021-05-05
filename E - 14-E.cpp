#include<bits/stdc++.h>
using namespace std;
const int maxn=2e3+10;
typedef long long ll;
int n,h,l,r;
int a[maxn],dp[maxn][maxn],max_=0;
int main(){
	cin>>n>>h>>l>>r;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	memset(dp,-0x3f3f3f3f,sizeof(dp));
	dp[0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=h-1;j++){
			int pos1=(j+a[i])%h;
			if(pos1>=l&&pos1<=r){
				dp[i][pos1]=max(dp[i][pos1],dp[i-1][j]+1);
			}else{
				dp[i][pos1]=max(dp[i][pos1],dp[i-1][j]);
			}
			pos1=(j+a[i]-1)%h;
			if(pos1>=l&&pos1<=r){
				dp[i][pos1]=max(dp[i][pos1],dp[i-1][j]+1);
			}else{
				dp[i][pos1]=max(dp[i][pos1],dp[i-1][j]);
			}
		}
	}
	for(int i=0;i<=h-1;i++){
		max_=max(max_,dp[n][i]);
	}
	cout<<max_<<endl;
} 
