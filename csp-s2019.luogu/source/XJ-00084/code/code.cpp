#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#define LL long long

using namespace std; 

LL int n;
LL int m;
struct Grece
{
	LL int num[23]={0};
};

struct Grece a[1350000];
LL int simple[2]={0,1};
LL int flag;
LL int geshu=2;
LL int j=0;

int main()
{
	freopen("code.in","r",stdin);
	freopen("code.out","w",stdout);
	
	cin >> n >> m; // ����λ����Ҫ��ĸ���
	
	for(LL int i=1;i<=n-1;i++)
	{
		geshu=geshu*2;
	} //������λ����2^n�� 
	

	for(int j=0;j<2;j++)
	{
		a[j].num[0]=simple[j];
	} // ���һλ 
	
	LL int i=2;
	LL int nx=1;
	
	while(nx<n) 
	{
		LL int x=0;
		//��ǰ��õ�һλ����ʱn=1
		
		LL int j=(i*2)-1; // ǰ��Ŀ������棬���������Ҫ���,Ҳ���Ǻ���� 
		LL int k=0;       // ���������ǰ��� 	
		
		while(1) 
		{			
			if(j<k) // �����ǰλ��ȫ�����ƣ�j��β����k��ͷ����λ��x++; 
			{			
				x++;
				k=0;				
				j=(i*2)-1;		
			}
			
			if(x>n) // �����ǰȫ��������ɣ�break; 
			{
				break;
			}

			a[j].num[x]=a[k].num[x];; // ���� 	
			
			k++; // ǰ��������� 
			j--; // �������ǰ�� 	
		}
		
		for(int j=0;j<i;j++) //ǰ��һ���ǰ��0 
		{
			a[j].num[nx]=0;
		}
		
		for(int j=(i*2)-1;j>=i;j--) //����һ���ǰ��1 
		{
			a[j].num[nx]=1;
		} 
		
		i=i*2; // ������2��׼������һλ
		nx++;// ��ǰλ��++
	}
	
//	for(LL int i=0;i<geshu;i++) // ��������� 
//	{
//		for(LL int j=0;j<n;j++)
//		{
//			cout << a[i].num[j];
//		}
//		cout << endl;
//	}
	
	for(LL int j=n-1;j>=0;j--) // ans��� ���� 
	{
		cout << a[m].num[j];
	}
	
	return 0;
}


