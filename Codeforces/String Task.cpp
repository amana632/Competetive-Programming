#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	string ans="";
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='Y'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='y'||s[i]=='u'){
		
		}
		else if(s[i]>='a'&&s[i]<='z') ans=ans+"."+s[i];
		else if(s[i]>='A'&&s[i]<='Z'){
			char k = s[i]+32;
			ans=ans+"."+k;}
		
	}
	cout<<ans;
	// your code goes here
	return 0;
}