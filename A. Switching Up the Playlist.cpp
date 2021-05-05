#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll n;
stack<string>ss;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		ss.push(s);
	}
	while(!ss.empty()){
		cout<<ss.top()<<endl;
		ss.pop();
	}
} 
