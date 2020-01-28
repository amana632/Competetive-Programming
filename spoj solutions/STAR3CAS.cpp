#include <iostream>
#include <vector>
#include <climits>
#define ll long long int
using namespace std;
ll ans=INT_MAX;
void func(vector<ll> &arr, ll n,ll c){
	ll size = arr.size();
	
	if(n==0) {
		if(ans>c) ans=c;
		}
//	else if(c>size) {}
	else {if(n-arr[size-n]>=0&&n-arr[size-n]<=size) func(arr,n-arr[size-n],c+1);
	func(arr,n-1,c+1);}
}

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> arr;
		for(ll i=0;i<n;i++){
			ll j;
			cin>>j;
			arr.push_back(j);
		}
	func(arr,n,0);
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}