#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int a[maxn],b[maxn],t,n,flag,cnt=0;
int main(){
	cin>>t;
	while(t--){
		flag=0;
		cnt=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
			b[i]-=a[i];
		}
		for(int i=1;i<=n;i++){
			if(b[i]<0){
				flag=1;
				break;
			}
			if(b[i]){
				cnt++;
				int pos=b[i];
				while(b[i]==pos){
					i++;
				}
				i--;
			}
		}
//		cout<<cnt<<endl;
		if(cnt>=2)flag=1;
		if(flag){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
} 
