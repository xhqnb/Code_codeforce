#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
int t;
ll a[4];
int main(){
	cin>>t;
	while(t--){
		cin>>a[0]>>a[1];
		sort(a,a+2);
		ll d=a[1]-a[0];
		cout<<(d+9)/10<<endl;
	}
} 
