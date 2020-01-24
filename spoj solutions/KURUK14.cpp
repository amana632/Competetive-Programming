#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		
		string ans;
		ll f[2000]={0};
		// 	for(int i=0;i<n;i++){
		// 	cout<<f[i]<<endl;
		// }
		ll j=n;
		while(j--){
			ll h;
			cin>>h;
			if(h>n){ ans="NO";
				
			}
			f[h]++;
		}
		// for(int i=0;i<n;i++){
		// 	cout<<f[i]<<endl;
		// }
		for(ll i=0;i<n;i++){
			if(f[i]>0){
				f[i]--;
			}
			else if(f[n-i-1]>0){
				f[n-i-1]--;
			}
			else {ans = "NO";
				break;
			}
		// 		for(int i=0;i<n;i++){
		// 	cout<<f[i]<<endl;
		// }
		}
		if(ans!="NO") ans="YES";
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}