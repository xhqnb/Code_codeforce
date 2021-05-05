#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int n,a[maxn],b[maxn],flag=0,in=-1,de=99999999;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>in&&a[i]<de){
			if(a[i]<a[i+1]){
				in=a[i];
				b[i]=1;
			}else{
				de=a[i];
		    }		
		}else if(a[i]>in){
			in=a[i];
			b[i]=1;
		}else if(a[i]<de){
			de=a[i];
		}else{
			flag=1;
		}
	}
	if(flag==1){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++){
			if(i==n)cout<<(b[i]==0)<<endl;
			else cout<<(b[i]==0)<<" ";
		}
	}
}
