#include<iostream>
#include<set> //����set�� 
using namespace std;
int main() {
	multiset<int> s;  //�������������set 
	multiset<int>::iterator it;	//��������� 
	s.insert(6);	 
	if(s.find(6)!=s.end())cout<<"Found!"<<endl;
	else cout<<"Not found!"<<endl;
	if(s.find(7)!=s.end())cout<<"Found!"<<endl;
	else cout<<"Not found!"<<endl;
	return 0;
}




