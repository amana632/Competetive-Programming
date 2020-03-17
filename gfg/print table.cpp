#include <iostream>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=1;i<=10;i++){
            cout<<n*i<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}