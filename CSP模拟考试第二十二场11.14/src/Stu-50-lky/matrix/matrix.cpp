#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,q,mp[1005][1005];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d%d%d",&n,&m,&q);
	for(int i=1;i<=q;i++){
		int type,pl,num;
		scanf("%d%d%d",&type,&pl,&num);
		if(type==2){
			for(int j=1;j<=n;j++)mp[j][pl]=num;
		}
		if(type==1){
			for(int j=1;j<=m;j++)mp[pl][j]=num;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			printf("%d ",mp[i][j]);
		printf("\n");
	}	
	return 0;
}/*���Լ�һ��ʱ�����������ô�ӣ���ʲô��flag�����ؼ�������ʲô 
ֻ�޸���ͷ������Ѿ��������˾������ƣ�j++ k-- Ȼ����flag��¼˳�����O��nm������ɫ  
