#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll n,ans=0,a[maxn];
bool flag=true;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		if(flag){
			ans+=a[i]*a[i];
			flag=false;
		}else{
			ans-=a[i]*a[i];
			flag=true;
		}
	}
//	cout<<ans<<endl;
	printf("%.10f\n",(double)ans*acos(-1));

} 
