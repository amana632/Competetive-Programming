#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        float r=b/a;
        ll n;
        cin>>n;
        float v1=a*pow(r,n-1);
        if(v1 < 0 && v1-int(v1)!=0)
            v1 = v1 - 1 ;

        v1 = int(v1) ;
        cout<<v1<<endl;
    }
	//code
	return 0;
}