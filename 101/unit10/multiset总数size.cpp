#include<iostream>
#include<set> 					//����set�� 
using namespace std;
int main() {
	multiset<int> ms;  			//�������������multiset 
	ms.insert(6); 
	ms.insert(6); 	
	ms.insert(7); 	
	cout<<ms.size()<<endl;	
	return 0;
}



