 #include<cstdio>
 #include<algorithm>
 #include<string.h>
 using namespace std;
 struct node {
     int v,next;
 }edge[1001];
  int DFN[1001],LOW[1001];
 int stack[1001],heads[1001],visit[1001],cnt,tot,index;
void add(int x,int y)
{
     edge[++cnt].next=heads[x];
     edge[cnt].v = y;
     heads[x]=cnt;
    return ;
 }
 void tarjan(int x)//����ڼ������ڴ����ݹ���ǵ㡣
 {
     DFN[x]=LOW[x]=++tot;// �½���ĳ�ʼ����
     stack[++index]=x;//��վ
     visit[x]=1;//��ʾ��ջ��
    for(int i=heads[x];i!=-1;i=edge[i].next)
     {
         if(!DFN[edge[i].v]) {//���û���ʹ�
            tarjan(edge[i].v);//���½������죬��ʼ�ݹ�
             LOW[x]=min(LOW[x],LOW[edge[i].v]);//�ݹ�������Ƚ�˭��˭�Ķ��ӣ����ף��������Ķ�Ӧ��ϵ���漰��ǿ��ͨ����������С�������顣
        }
        else if(visit[edge[i].v ]){  //������ʹ������һ���ջ�
             LOW[x]=min(LOW[x],DFN[edge[i].v]);//�Ƚ�˭��˭�Ķ��ӣ����ס��������Ӷ�Ӧ��ϵ
         }
     }
     if(LOW[x]==DFN[x]) //����������ǿ��ͨ�������������С����
    {
         do{
            printf("%d ",stack[index]);
             visit[stack[index]]=0;
             index--;
         }while(x!=stack[index+1]);//��ջ�����������
         printf("\n");
     }
     return ;
 }
 int main()
 {
     memset(heads,-1,sizeof(heads));
     int n,m;
     scanf("%d%d",&n,&m);
    int x,y;
     for(int i=1;i<=m;i++)
     {
         scanf("%d%d",&x,&y);
        add(x,y);
     }
    for(int i=1;i<=n;i++)
         if(!DFN[i])  tarjan(i);//�������û�з��ʹ����ʹӴ˵㿪ʼ����ֹͼû����
    return 0;
 }
