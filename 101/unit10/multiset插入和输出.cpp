#include<iostream>
#include<set> //����set�� 
using namespace std;
int main() {
	multiset<int> s;  //�������������multiset 
	multiset<int>::iterator it;	//��������� 
	s.insert(8);	//����Ԫ�� 
	s.insert(6);
	s.insert(6);
	s.insert(6);  
	//ѭ�����set������Ԫ��
	for(it=s.begin();it!=s.end();it++)	 
		cout<<*it<<endl;
	return 0;
}



