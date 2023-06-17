#include<iostream>
#include<string>
#include<sstream>
#include<ctime> 
#include<cstdlib>
#define M 5
using namespace std;
string greet[M]={"*** ����ش�������� ***",
				"*** ����ش𣺵�������� ***",
				"*** ����ش���ɶ�Ը��� ***",
				"*** ����ش����������� ***",
				"*** ����ش𣺺Ǻ� ***"}; 				 
string joke[M]={"    С������һ��������ο���˯�ŵ��飬���쿴��������***",
				"    �������ɹŵĺ�����˾�� ***",
				"    ���٣���ΪʲôҪӡ�ٳ���\n    �����޹���˵����Ϊ�Ҳ���ӡ�泮�� ***",
				"    ���ף�����������һ�����˶���Ǯ��\n    ���ң����ã����쿴����ֽ��֪���ˡ� ***",
				"    ���裺������ֺò���ʲô��\n    С�죺���յ�...�׿�ˮ������ *** "};
string sorry[M]={"*** ����ش𣺲�����˼���ҵ�����̫�������� ***",
				"*** ����ش��������� ***",
				"*** ����ش���������Ҳ�׼���ش� ***",
				"*** ����ش��޿ɷ�� ***",
				"*** ����ش��´��ٸ����� ***"};
bool allDigits(string s){
	for(int i=0;i<s.size();i++)
		if(s[i]<'0'||s[i]>'9') return 0;
	return 1;
}

void decompose(string s){
	stringstream ss;
	int n,c=0;
	ss<<s; ss>>n;
	if(n<=1) {cout<<"    �����̫С��"<<n<<"�Һ���ֽⲻ�� ***"<<endl;return;} 
	for(int i=2;i*i<=n;i++)
		while(n%i==0){
			if(c==0) {cout<<"    �����ҷֽ�Ľ���ɣ���֪����n����"<<i; c++;} 
			else cout<<"����"<<i;
			n/=i;
		}
	if(c==0) cout<<"    �����һ�֪��"<<n<<"�Ǹ������� ***"<<endl;
	else if(n>1) cout<<"����"<<n<<" ***"<<endl;
	else cout<<" ***"<<endl;
}

int main(){
	cout<<endl;
	cout<<"--------------������ʹ��˵����--------------"<<endl;
	cout<<endl;
	cout<<" ��ã�������������ˣ���������Ҹ�������"<<endl;
	cout<<" ��������������뷨����������ѱ�����"<<endl; 
	cout<<" ��������·���괦�����������"<<endl; 
	cout<<" ����ʺ��밴enter�������͵������˳�����"<<endl;
	cout<<" �������֪���𰸣�����ѻش���ʾ��������һ��"<<endl;
	cout<<" �������𰸺�������ڹ�괦������������"<<endl;
	cout<<endl; 
	cout<<"--------------------------------------------"<<endl;
	cout<<endl; 
	while(1){
		string s;
		getline(cin,s);
		if(s=="") continue;
		if(s=="88") 
			break; 
		else if(s.find("��")!=-1||s.find("˭")!=-1) 
			cout<<"*** ����ش��ҵ����ֽ�MIKE�������ҵ����� ***"<<endl; 
		else if(s.find("��")!=-1||s.find("���")!=-1)
			cout<<"*** ����ش��ҽ���100���ˣ�����Զ������ ***"<<endl;	
		else if(s.find("����")!=-1||s.find("�Ķ�")!=-1)	
			cout<<"*** ����ش��޴����� ***"<<endl; 
		else if(s.find("��")!=-1||s.find("�س�")!=-1)
			cout<<"*** ����ش���ʲô�����ᣬֻ������ ***"<<endl;
		else if(s.find("��")!=-1)
			cout<<"*** ����ش���������2��29�գ���������������� ***"<<endl;
		else if(s.find("��")!=-1)
			cout<<"*** ����ش��ҵ�����Ϊ59����û�м��� ***"<<endl;
		else if(s.find("��")!=-1||s.find("��")!=-1||s.find("��")!=-1)
			cout<<"*** ����ش��Ұ������򣬵��ǲ�����������Ϊ��û���� ***"<<endl;
		else if(s.find("Ц")!=-1)
			cout<<"*** ����ش���������˵��Ц���ɣ�"<<endl<<joke[rand()%M]<<endl;
		else if(s.find("���")!=-1)
			cout<<greet[rand()%M]<<endl;
		else if(allDigits(s)){
			cout<<"*** ����ش�"<<s<<"�Ǹ�������"<<endl;
			decompose(s); 
		}
		else 
			cout<<sorry[rand()%M]<<endl;	
	}
	cout<<endl; 
	cout<<"-------------�㴥���˽����Ļ���-------------"<<endl;
	cout<<" ��Ҫ֪ͨ�� "<<endl; 
	cout<<" �������н������밴����������ڽ��Զ��ر� "<<endl;   
	cout<<" ���벻Ҫ����·����ģ�����ֻ��ϵͳ��Ϣ�� "<<endl; 
	cout<<endl; 
	cout<<" �ټ�����Ҫ������������ "<<endl;
	cout<<"--------------------------------------------"<<endl;
	return 0;
}


