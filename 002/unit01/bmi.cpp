#include<iostream>
using namespace std;
int main() {
	double w,h,bmi;
	cin>>w>>h;
	bmi=w/(h*h);
	if (bmi<=18.5)
		cout<<"hi,���˹���";
	else if (bmi>18.5 && bmi<=24) 
		cout<<"hi,��������";
	else if (bmi>24 && bmi<=28) 
		cout<<"hi,���˹���";
	else if (bmi>28 && bmi<=32) 
		cout<<"hi,���˷���";
	else 
		cout<<"hi,���˷ǳ�����";
	return 0;
} 


