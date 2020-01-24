#include <iostream>
#include <cmath>
using namespace std;



int main() {
	int t;
	
	cin>>t;
	int h=t;
	while(t--){
		long long int n;
		cin>>n;
		long long int x = floor(-1+sqrt(1+n));
		cout<<"Case "<<h-t<<": "<<x<<endl;
	}
	// your code goes here
	return 0;
}
