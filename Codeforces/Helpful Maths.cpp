#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[100];
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		arr[i]=s[2*i];
	}
	sort(arr,arr+(s.length()/2)+1);
	for(int i=0;i<s.length();i++){
		s[2*i]=arr[i];
	}
	cout<<s;
	// your code goes here
	return 0;
}