#include<iostream> 
using namespace std;
int main() {
	int a,b,x;   
	cin>>a>>b;	
	cout<<a<<" "<<b<<endl;  
	x=a; //��a�����ֵ���ŵ�x���� 
	a=b; //������b�����ֵ���ŵ�a����ȥ 
	b=x; //��x�����ֵ���Ѿ�������a�����ֵ�ˣ� �ָ�ֵ��b 
	cout<<a<<" "<<b<<endl;  
	return 0;
}


