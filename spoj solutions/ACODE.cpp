#include <iostream>
#define ll long long int
using namespace std;
int n;
ll arr[6000];
ll fun(string s,int id){
	// for(int i=id;i<n;i++)
	// cout<<s[i];
	// cout<<endl;
	if(id>=n) return 0;
	if(id==n-1) return 1;
	//if(id==n-2) return 1;
	if(id==n-2&&(s[id]-'0')<=2&&(s[id+1]-'0')<=6&&(s[id+1]-'0')==0) return 1;

	if(id==n-2&&(s[id]-'0')<=2&&(s[id+1]-'0')<=6&&(s[id+1]-'0')>0) return 2;
	if(arr[id]!=-1) return arr[id];
	ll q1=0;
	ll q2=0;
	if(s[id+1]!='0')
		q2=fun(s,id+1);
	if(((s[id]-'0')<=2)&&((s[id+1]-'0')<=6)&&s[id+2]!='0')
	q1=fun(s,id+2);
	arr[id]=q1+q2;
return q1+q2;
	
}

int main() {
	while(1){
		
		string s;
		cin>>s;
		n=s.length();
		if(s[0]=='0') break;
		for(ll i=0;i<6000;i++) arr[i]=-1;
	//	cout<<s<<n<<endl;
		cout<<fun(s,0)<<endl;
	}
	// your code goes here
	return 0;
}