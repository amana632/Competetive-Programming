#include <iostream>
#define ll long long int
using namespace std;

ll cube(ll n){
    return n*n*n;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        
        ll n;
        cin>>n;
        ll k=n;
        ll ans=0;
        while(k>0){
            // cout<<k<<endl;
            // cout<<k%10<<endl;
        ans+=cube(k%10);
        k=k/10;
            // cout<<ans<<endl;
        }
        if(ans==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
	//code
	return 0;
}