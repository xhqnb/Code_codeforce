#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+10;
typedef long long ll;
int n,k,cnt=0,t;
set<int>s;
int main(){
	cin>>t;
	while(t--){
		s.clear();
		cnt=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		cnt=s.size();
		if(k==1){
			if(cnt==1){
				cout<<1<<endl;
			}else{
				cout<<-1<<endl;
			}
		}else{
			if(cnt<=k){
				cout<<1<<endl;
			}else{
				cout<<1+(cnt-2)/(k-1)<<endl;
			}
		}
		
	}
} 
