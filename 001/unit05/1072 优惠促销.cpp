#include<iostream>
using namespace std;   //ʹ�ñ�׼���ֿռ� 
int main(){
	int n,a;   //�������
	cin>>n;   //���벢��ֵ����
	//if (n <= 100000 && n >= 0)
	//{
	if (n >= 100)   //�ж� 
		a = n*7;   //���� 
	else   //�ж�
		a = n*10;   //����
	cout<<a;   //���
	//}
	//else
	//	printf("input wrong");
}
