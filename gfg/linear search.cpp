#include <iostream>
#include <vector>
#define ll long long int
using namespace std;


int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a;
		for(ll i=0;i<n;i++){
			ll g;
			cin>>g;
			a.push_back(g);
		}
		ll f;
		cin>>f;
		ll i;
		for(i=0;i<n;i++){
			if(a[i]==f) {
				cout<<i<<endl;
				break;
			}
		}
        if(i==n)
        cout<<-1<<endl;
	}
	// your code goes here
	return 0;
}