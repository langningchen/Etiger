#include<iostream>
#include<set>
using namespace std;
int main() {
	multiset<int> s;
	s.insert(9); s.insert(8);
	s.insert(7); s.insert(6); 
	multiset<int>::iterator it;
	it=s.end();  it--; //ָ��Ŀǰ���Ԫ�� 
	s.erase(it); 
	it=s.end();  it--; //ָ��Ŀǰ���Ԫ��
	cout<<*it<<endl;
	return 0;
}

