#include <iostream>
using namespace std;

 int main(){
	int  t,n,m,a;
	cin >>t;
	while(t--){
	    cin >>n>>m;
	    a=n/m;
	
	    if(n%m!=0)
	    cout <<"NO"<<endl;
	    else if(a%2==0)
	    cout <<"YES"<<endl;
	    else
	    cout <<"NO"<<endl;
	}
	return 0;
}
