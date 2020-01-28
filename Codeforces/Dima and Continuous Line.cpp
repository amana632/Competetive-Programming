#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	string ans="no";
	for(int i=0;i<n-1;i++){
			int x1,x2,x3,x4;
			if(arr[i]<arr[i+1]){
			x1=arr[i];
			x2=arr[i+1];}
			else {
				x1=arr[i+1];
				x2=arr[i];
				}
		for(int j=i+2;j<n-1;j++){
		if(arr[j]<arr[j+1]){
			x3=arr[j];
			x4=arr[j+1];}
			else{
					x3=arr[j+1];
			x4=arr[j];}
			
	//	cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
			if(x2>x4&&x4>x1&&x1>x3){ 
				ans="yes";
			}
			else if(x4>x2&&x2>x3&&x3>x1) {
				ans="yes";
			}}
		}
	
	cout<<ans;
	// your code goes here
	return 0;
}