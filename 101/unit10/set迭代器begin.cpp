#include<iostream>
#include<set> 				//����set�� 
using namespace std;
int main() {
	set<int> s;  			//�������������set 
	s.insert(7);			//����Ԫ�� 
	s.insert(5);
	s.insert(6);	
	set<int>::iterator it;	//��������� 
	it=s.begin();
	cout<<*it<<endl;
	return 0;
}




