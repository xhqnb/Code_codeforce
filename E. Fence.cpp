#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
int t;
ll a[4];
int main(){
	cin>>t;
	while(t--){
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		ll d=a[2]-a[0];
		cout<<abs(d-a[1])+1<<endl;
	}
} 
