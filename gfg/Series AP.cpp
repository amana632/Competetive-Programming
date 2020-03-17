#include <iostream>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll n;
        cin>>n;
        cout<<a+(n-1)*(b-a)<<endl;
    }
	//code
	return 0;
}