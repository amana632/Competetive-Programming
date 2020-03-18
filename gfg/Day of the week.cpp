#include <iostream>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll d,m,y;
        cin>>d>>m>>y;
         static int t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    cout<< ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7<<endl; 
    }
	//code
	return 0;
}