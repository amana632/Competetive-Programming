#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        bool neg=n<0;
        n=abs(n);
        m=abs(m);
        ll r=n%m;
        ll ans;
        // cout<<r<<endl;
        // cout<<abs(r)<<" "<<abs(m)-abs(r)<<endl;

        if(r<m-r) ans=n-r;
        else ans=n+m-r;
        if(neg) ans=-1*ans;
        cout<<ans<<endl;
    }
	//code
	return 0;
}