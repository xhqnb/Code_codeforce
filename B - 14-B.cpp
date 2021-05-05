#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn],n,l=0,r=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==i){
			continue;
		}else if(l==0&&r==0){
			l=i;
			while(a[i]==a[i+1]+1&&i+1<=n){
				i++;
			}
			
			r=i;
			i++;
//			cout<<l<<" "<<r<<endl;
		}else{
			cout<<0<<" "<<0<<endl;
			return 0;
		}
	}
	cout<<l<<" "<<r<<endl;
} 
