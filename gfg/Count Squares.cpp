#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        double a=sqrt(n);
        // cout<<a;
        if(a==int(a)) cout<<a-1<<endl;
        else cout<<floor(a)<<endl;
    }
	//code
	return 0;
}