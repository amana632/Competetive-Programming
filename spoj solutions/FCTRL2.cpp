#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ans=1;
		while(n!=1){
			ans=ans*n;
			n--;
		}
	
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}