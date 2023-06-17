#include<iostream>
#include<windows.h>
#define LEFT 0
#define RIGHT 1 
using namespace std;
const int barWidth=50; 
int round, n;
void print_arrow(int pos, int dir) {
	int i=0;
	cout<<"[";
	if(dir==RIGHT) {
		while(i<barWidth) {
	        if (i < pos) cout << "=";
	        else if (i == pos) cout << ">";
	        else cout << " ";
			i++;			
		}
	} else if(dir==LEFT) {
		while(i<barWidth) {
	        if (i < pos) cout << " ";
	        else if (i == pos) cout << "<";
	        else cout << "=";
			i++;	
		}		
	}
	cout<<"]";
}
void running_bar() {
	round=1;
	double progress = 0.0;
	int dir=RIGHT; //���ҡ���ʼ 
	int pos;
	while(round <= n) {  //round��Ȧ����n��Ŀ�� 
		//��ӡ������
		if(progress>1) dir=1-dir, progress=0; //����ﵽ100%�ˣ���ʱ��任������ 
		if(dir==RIGHT)
			pos = barWidth * progress; //λ����Ϣ���ܿ��*�ٷֱ� 
		else
			pos = barWidth * (1-progress);
		print_arrow(pos, dir);  //��ӡ��ǰ״̬ 
		
		cout<<"С�������ܵ�"<<round<<"Ȧ"<<"\r"; 
		
	    cout.flush();  //���������� 
		progress += 0.05;  //ÿ�θ���5%��ͬѧ�ǿ����������Ȧһ������ 
		round++; //Ȧ������һ 
	    Sleep(50);  //��ʱ50����
	}
	cout<<endl;
}
int main(){
	cout<<"���뷣С���ܶ���Ȧ"<<endl; 
	cin>>n; 
	running_bar(); //ʹ��һ�������Լ�д�ĺ��� ��c100�ͻ�ѧ���� 
	return 0;
} 


