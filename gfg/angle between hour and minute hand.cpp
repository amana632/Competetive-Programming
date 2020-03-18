#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        double h,m;
        cin>>h>>m;
        if (h == 12) h = 0;  
        if (m == 60) m = 0; 
        double a,b;
        a=(h*60+m)*0.5;
        b=6*m;
        double c = abs(a-b);
        cout<<floor(min(360-c,c))<<endl;
    }
	//code
	return 0;
}