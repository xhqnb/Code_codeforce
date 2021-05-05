#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
const int inf=0x3f3f3f3f;
ll t,n,a[maxn],pos,ans=0;
string s;
int main(){
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		pos=0;
		cin>>n;
		cin>>s;
		s=" "+s;
		queue<int>q1,q2;
		for(int i=1;i<=n;i++){
			if(s[i]=='0'){
				if(!q2.empty()){
					a[i]=a[q2.front()];
					q2.pop();
					q1.push(i);
				}else{
					pos++;
					a[i]=pos;
					q1.push(i);
				}
			}else{
				if(!q1.empty()){
					a[i]=a[q1.front()];
					q1.pop();
					q2.push(i);
				}else{
					pos++;
					a[i]=pos;
					q2.push(i);
				}
			}
		}
		cout<<pos<<endl;
		for(int i=1;i<=n;i++){
			if(i==n)cout<<a[i]<<endl;
			else cout<<a[i]<<" ";
		}
	}
} 
