#include <iostream>
#define M 505 
#define N 2005
using namespace std;
int n,m,w[M],f[M][N]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>w[i];
	//��ʼ�����㣬�Ѿ�Ĭ��ִ����		
	for(int i=1;i<=m;i++)   //ѭ���鿴ÿ�ֽ��i 
		for(int j=0;j<=n;j++) {  //ѭ���鿴����ʣ�����j 
			if(j<w[i])   //���i̫�أ��޷����� 
				f[i][j]=f[i-1][j];
			else 		//�Ƚ����־��ߣ����i���Էţ����߲���
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+w[i]);
		} 
	cout<<f[m][n]<<endl; 
	return 0;
} 


