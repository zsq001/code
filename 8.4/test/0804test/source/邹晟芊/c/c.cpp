#include<iostream>
using namespace std;
struct node{
	int num,val;
}kkk,kkksc;
int a[1000010],b[30];
int main()
{
	freopen("c.in","r",stdin);
	freopen("c.out","w",stdout);
	int n,q,ans=0,w=1;//��ǰλ��;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cin>>q;
	for(int i=1;i<=q;i++)
	cin>>b[i];
	for(int i=1;i<=q;i++)//�������� 
	{
		w=1;
	while(w!=n)//δ��ʱ
	{
		int ll=0;
		kkk.val=2147483647;
		kkksc.val=-1;
		int x=w+b[i];
		if(x>n)
		x=n;
		for(int j=w+1;j<=x;j++)//�����ߵ�ɽɨ�� 
		{
			if(a[j]<a[w])//���ڵ�ɽ��Ԥ�Ƶ�ɽ�� 
			{
				if(a[j]<kkk.val)
				{
					kkk.val=a[j];
					kkk.num=j;
					ll=1;
				}
			}
			else if(a[j]>a[w])
			{
				if(a[j]>kkksc.val)
				{
					kkksc.val=a[j];
					kkksc.num=j;
				}
			 } 
		}
		if(ll==1)
		w=kkk.num;
		else 
		{
			w=kkksc.num;
			ans++;
		}
	}
		cout<<ans<<endl;
		ans=0;
	} 

}
