#include<iostream>
#include<set> //����set�� 
using namespace std;
int main() {
	set<int> s;  //�������������set 
	set<int>::iterator it;	//��������� 
	s.insert(8);	//����Ԫ�� 
	s.insert(6);
	s.insert(7);
	s.insert(7);  
	s.insert(6);
	s.insert(6);  
	s.insert(10);
	s.insert(2);  
	//ѭ���������Ԫ��
	for(it=s.begin();it!=s.end();it++)	 
		cout<<*it<<endl;
	return 0;
}




