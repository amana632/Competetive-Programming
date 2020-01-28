#include <iostream>
#define ll long long int 
using namespace std;
ll farr[64];

ll fib(ll n){
	if(n==0||n==1) return n;
	ll x;
	if(farr[n]!=-1) return farr[n];
	else {x=fib(n-1)+fib(n-2);
			//	cout<<"i'm used 1"<<endl;
	
	farr[n]=x;
	
	return x;
}}

int main() {
	
	ll t;
	cin>>t;
	for(ll i=0;i<64;i++){
		farr[i]=-1;
	}
	farr[1]=1;
	farr[0]=0;
	while(t--){
		ll n;
		cin>>n;
		cout<<"Fib("<<n<<") = "<<fib(n)<<endl;
	}
	// your code goes here
	return 0;
}