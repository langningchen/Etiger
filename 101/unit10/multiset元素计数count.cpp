#include<iostream>
#include<set> 					//����set�� 
using namespace std;
int main() {
	multiset<int> ms;  			//�������������multiset 
	ms.insert(6); 
	ms.insert(6); 	
	ms.insert(7); 	
	cout<<ms.count(6)<<endl;	
	cout<<ms.count(7)<<endl;
	cout<<ms.count(8)<<endl;
	return 0;
}



