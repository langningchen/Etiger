#include<iostream>
#include<ctime> 
using namespace std;
void SLEEP(int x){ //�Լ�������һ����������������ʱx���롣100��ѧ������Լ��������� 
	long long now=clock(); 
	while(clock()-now < x) ; //002y��ѧ�����������д�� 
} 
int main(){
	cout<<"��ʼ����ʱ"<<endl; 
	int i=10; 
	while(i){
		cout<<i<<endl;
		SLEEP(1000); //��ʱ1��
		i--;
	}
	cout<<"�������Ȥ��"<<endl;	
	return 0;
}



