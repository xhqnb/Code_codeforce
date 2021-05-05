#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a1,b1,c1,a2,b2,c2,n;
int main(){
	cin>>n;
	cin>>a1>>b1>>c1;
	cin>>a2>>b2>>c2;
	ll min_=n-min(a1,a2+c2)-min(b1,b2+a2)-min(c1,c2+b2);
	ll max_=min(a1,b2)+min(b1,c2)+min(c1,a2);
	cout<<min_<<" "<<max_<<endl;
}
