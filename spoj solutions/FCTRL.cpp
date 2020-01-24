#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ans=0;
		long long int i=1;
		while(1){
			long long int h=n/pow(5,i);
			if(h==0) break;
			i++;
			ans+=h;
		}
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}