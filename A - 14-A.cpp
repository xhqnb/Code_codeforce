#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size(),j=0;
	string ss="hello";
	for(int i=0;i<len;i++){
		if(s[i]==ss[j]){
			j++;
		}
		if(j==5){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
} 
