#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int w[maxn],p[maxn],dp[maxn];
int main(){
	int m;
	int n;
	double ans=0;
	cout<<"������mǧ�ˣ�n�����"<<endl;	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cout<<"�������"<<i<<"�ֻ���������ͼ۸�"<<endl; 
		cin>>w[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+p[i]);			
		}
	}
	cout<<"01������ʽ����������ֵΪ��"<<endl;
	cout<<dp[m]<<endl;
} 
