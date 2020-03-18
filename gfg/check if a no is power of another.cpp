#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        double a=log(y)/log(x);
        if(a==int(a)) cout<<1<<endl;
        else cout<<0<<endl;
    }
 
	//code
	return 0;
}