#include<iostream>
#include<set> 										//����set�� 
using namespace std;
int main() {
	set<int> s;  									//�������������set 
	s.insert(6);	 
	if(s.find(6)!=s.end())
		cout<<"Yes"<<endl;
	else 
		cout<<"No"<<endl;
	return 0;
}




