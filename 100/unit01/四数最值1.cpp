#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<min(min(a,b),min(c,d))<<endl;
	return 0;
}




