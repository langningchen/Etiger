#include<iostream>
#include<set> 							//����set�� 
using namespace std;
int main() {
	set<int> s;  						//�������������set 
	s.insert(7);						//����Ԫ�� 
	s.insert(5);
	s.insert(6);
	s.insert(5);	
	set<int>::iterator it;				//��������� 
	for(it=s.begin();it!=s.end();++it)
		cout<<*it<<endl;
	return 0;
}




