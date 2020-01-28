#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
    sort(arr, arr+n, greater<int>()); 
    int sumsofar=0;
	for(int i=0;i<n+1;i++){
		if(sumsofar>sum-sumsofar) {cout<<i;
			break;}
		else sumsofar+=arr[i];
	}
	// your code goes here
	return 0;
}