#include <iostream>
#define ll long long int
using namespace std;

ll suma(ll arr[], ll n){
	if(n==0) return 0;
	return arr[0]+suma(arr+1,n-1);
}

int main() {
	ll t;
	cin>>t;
	ll k=t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
		cin>>arr[i];}
		cout<<"Case "<<k-t<<": "<<suma(arr,n)<<endl;
	}
	// your code goes here
	return 0;
}