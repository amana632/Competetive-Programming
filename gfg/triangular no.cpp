#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        double d= (-1+sqrt(1+8*x))/2;
        if(d==int(d)) cout<<1<<endl;
        else cout<<0<<endl;

    }
	//code
	return 0;
}