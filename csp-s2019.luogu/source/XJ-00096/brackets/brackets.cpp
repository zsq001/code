#include<iostream>
#include<cstdio>
using namespace std;
char a[2005];
int b[100][2],c[1000],d=0,e,f=0,g[1000]={},p=0;
bool x=false;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}for(int i=0;i<n-1;i++){
		b[i][0]=i+2;
		cin>>b[i][1];
	}
	for(int j=0;j<n;j++){
		e=b[j][0];
		for(int k=0;k<n-1;k++){
			if(b[k][0]==e){
				if(b[k][1]==1){
					c[d]=1;
					x=true;
				}else{
					c[d]=b[k][1];
					d++;
					e=b[k][1];
					k=0;
				}
			}else{
				if(x){
					x=false;
					break;
				}
			}
		}
		for(int m=0;m<d;m++){
			if(f==2){
				g[j]++;
				for(int z=0;z<f;z++){
					c[z]=0;
				}
				f=0;
			}
			if(a[c[m]]=='('){
				f=1;
			}else if(a[c[m]]==')'&&f==1){
				f=2;
			}
		}
	}
	for(int v=0;v<n;v++){
		if(g[v]==0){
			p+=v;
		}
	}
	p--;
	cout<<p;
	return 0;
}
//��һ��һ������ n����ʾ���Ĵ�С��
//�ڶ���һ����Ϊ n ���ɡ�(�� �롯)�� ��ɵ����Ŵ����� i �����ű�ʾ i �Ž���ϵ����š�
//�����а��� n-1 ���������� i��1  i < n����������ʾ i+1 �Ž��ĸ��ױ�� fi+1��
