#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
int st,ed;
#define maxn 30000000
bool vis[maxn];
int dep[maxn];
void bfs(){
	queue<int> q;
	q.push(st);
	vis[st]=1;
	while(q.empty()==0){
		int x=q.front();
		q.pop();
		if(x==ed) break;//���� 
		if(vis[x-1]==0&&x!=0){//�жϲ�������ԭ�� 
			q.push(x-1);//����״̬��¼ 
			dep[x-1]=dep[x]+1;//��ȼ�1 
			vis[x-1]=1;//��¼�ýڵ� 
		}
		if(vis[x+1]==0&&x<=2000000){//��Խ�� 
			q.push(x+1);
			dep[x+1]=dep[x]+1;
			vis[x+1]=1;
		}
		if(vis[x<<1]==0&&x<=2000000){
			q.push(x<<1);
			dep[x<<1]=dep[x]+1;
			vis[x<<1]=1;
		}
	}
}
int main(){
	scanf("%d%d",&st,&ed);
	bfs();
	printf("%d",dep[ed]);// 
	return 0;
} 
