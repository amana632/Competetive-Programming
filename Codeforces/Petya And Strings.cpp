#include <iostream>
using namespace std;

int main() {
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	int n= s1.length();
	int diff=0;
	for(int i=0;i<n;i++){
		if(s1[i]>='A'&&s1[i]<='Z') s1[i]=s1[i]+32;
		if(s2[i]>='A'&&s2[i]<='Z') s2[i]=s2[i]+32;
		if(s1[i]!=s2[i]) { diff+=s1[i]-s2[i];
			break;
		}
	//	cout<<diff;

	}
	
	if(diff<0) cout<<-1;
	else if(diff==0) cout<<0;
	else cout<<1;
	// your code goes here
	return 0;
}