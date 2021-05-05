#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int w[maxn],p[maxn],dp[maxn];
int main(){
	int m;
	int n;
	double ans=0;
	cout<<"请输入m千克，n组货物"<<endl;	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cout<<"请输入第"<<i<<"种货物的重量和价格"<<endl; 
		cin>>w[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+p[i]);			
		}
	}
	cout<<"01背包方式，背包最大价值为："<<endl;
	cout<<dp[m]<<endl;
} 
