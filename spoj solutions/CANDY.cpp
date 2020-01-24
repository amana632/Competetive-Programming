#include <iostream>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;

int main() {
	while(1){
	ll int t;
	cin>>t;
	if(t==-1) return 0;
	ll int n;
	n=t;
	ll int total =0;
	vector<int> arr;

	while(t--){
		int j;
		cin>>j;
		arr.push_back(j);
		total+=j;
	}
	ll int ans=0;
	ll acc=total/n;
	// cout<<total<<" "<<acc<<" "<<n<<" ";
	if(total%n!=0) ans=-2;
	else{
		for(int i=0; i<arr.size();i++){
			
		// cout<<acc-arr[i]<<" ";
		ans+=abs(acc-arr[i]);}
	}
	cout<<ans/2<<endl;
	}
	// your code goes here
	return 0;
}