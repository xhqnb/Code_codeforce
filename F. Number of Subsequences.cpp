#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
const int mod=1e9+7;
ll n,dp[maxn][3],cnt=1;
string s;
int main(){	
	cin>>n;
	cin>>s;
	s=" "+s;
//	cout<<s<<endl;
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++){
			dp[i][j]=dp[i-1][j];
		}
		if(s[i]=='a')dp[i][0]=(dp[i-1][0]+cnt)%mod;
        if(s[i]=='b')dp[i][1]=(dp[i-1][0]+dp[i-1][1])%mod;
        if(s[i]=='c')dp[i][2]=(dp[i-1][1]+dp[i-1][2])%mod;
		  if(s[i] == '?'){
            dp[i][0]=(3*dp[i-1][0]+cnt)%mod;
            dp[i][1]=(3*dp[i-1][1]+dp[i-1][0])%mod;
            dp[i][2]=(3*dp[i-1][2]+dp[i-1][1])%mod;
            cnt=(cnt*3)%mod;
        }
	}
	cout<<dp[n][2]<<endl;
} 
