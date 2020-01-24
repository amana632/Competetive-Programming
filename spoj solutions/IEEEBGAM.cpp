#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// float sqrt(long long int p){
// 	float k;
	
// }


int main() {
	int t;
	
	cin>>t;
	while(t--){
		double n;
		cin>>n;
		// cout<<n<<endl;
		double x = n/(n+1);

		cout<<setprecision(8)<<fixed<<x<<endl;
		        // printf("%0.8f\n",x);

	}
	// your code goes here
	return 0;
}