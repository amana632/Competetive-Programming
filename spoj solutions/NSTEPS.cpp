#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll x;
		ll y;
		cin>>x;
		cin>>y;
		if((x-y)==2||(x-y)==0){
		if(x%2==0&&y%2==0){
		cout<<x+y<<endl;
		}
		else if(x%2!=0&&y%2!=0){
			cout<<x+y-1<<endl;
			}
					else cout<<"No Number"<<endl;

		}
		else cout<<"No Number"<<endl;
	}
	// your code goes here
	return 0;
}