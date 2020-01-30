#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main() {
	while(1){
		ll n;
		cin>>n;
		if(n==0) break;
		vector<ll> arr;
		while(n--){
			ll k;
			cin>>k;
			arr.push_back(k);
		}
		ll curr, ans=0;
		for(ll i=0;i<arr.size();i++){
			curr=arr[i];
			arr[i+1]=arr[i+1]+arr[i];
			ans+=abs(arr[i]);
		//	cout<<arr[i]<<" "<<ans<<endl;
		}
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}