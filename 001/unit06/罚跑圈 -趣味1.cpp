#include<iostream>
#include<windows.h>
using namespace std;
const int barWidth=50;
int round, n;
void running_bar() {     //�Զ��幦���ܶ������� 
	round=1;
	double progress = 0.0;
	while(round <= n) {  //roundĿǰȦ����n��Ŀ�� 
		//��ӡ������
		cout<<"[";
		progress = round*1.0/n; //���ĿǰȦ��roundռ��Ȧ��n���� 
		int pos = barWidth * progress; //������*�ܿ��barwidth���õ�һ��λ����Ϣ 
		int i=0;
		while(i<barWidth) {
	        if (i < pos) cout << "=";
	        else if (i == pos) cout << ">"; //002��ѧ�����ֶ�ѡһ�ķ�֧��䣨��������ֻ���ѡһ�� 
	        else cout << " ";
			i++;			
		}
		cout<<"] ";
		
		cout<<"С�������ܵ�"<<round<<"Ȧ"<<"\r"; 
		
	    cout.flush();  //�������ĺ��������԰��������������� 
		round++;
	    Sleep(50);  //�������ĺ�����������ϵͳ˯һ�������ͬѧ�ǿ�����������ĳ��������ֻᷢ��ʲô�� 
	}
	cout<<endl;
}
int main(){
	cout<<"���뷣С���ܶ���Ȧ"<<endl; 
	cin>>n; 
	running_bar();
	return 0;
} 


