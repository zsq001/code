#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int N=100005;

int T,n,K;
int d[N][2];
vector<int> g[N];
bool vis[N];

inline int read(int &x)//���ٶ��� 
{char ch=getchar();
 int f=1;x=0;
 while (ch<'0'||ch>'9') {if(ch=='-')f=-1; ch=getchar();}
 while (ch>='0'&&ch<='9') {x=x*10+ch-'0'; ch=getchar();}
 return x*f;
}

void dfs(int u,int fa)
{if(vis[u]) return;
 vis[u]=1;
 d[u][0]=0;//��uΪ�����������ܹ�������Ե�������,�������ڵ�u
 d[u][1]=0;//��uΪ�����������ܹ�������Ե�������,�����ڵ�i��
 for(int i=0; i<g[u].size(); i++)
   {int v=g[u][i];
    if (v==fa) continue;
    dfs(v,u);
    d[u][0]+=max(d[v][0],d[v][1]);//u��ѡ,u�Ķ���v��ѡ�ɲ�ѡ 
   }
 for(int i=0; i<g[u].size(); i++)
   {int v=g[u][i];
    if (v==fa) continue;
    d[u][1]=max(d[u][1],d[u][0]-max(d[v][1],d[v][0])+d[v][0]+1);//uѡ,u������һ������v����һ��,��v��������v�Ͳ���ѡ 
   }
}

void init()
{read(n),read(K);
 for (int i=0; i<=n; i++)
   g[i].clear();
 memset(vis,0,sizeof(vis));
 for(int i=1; i<n; i++)
   {int u;
    read(u);
    g[u].push_back(i+1);
    g[i+1].push_back(u);
   }
}

int main()
{freopen("tree.in","r",stdin);
 freopen("tree.out","w",stdout);
 read(T);
 while(T--)
   {init();
    dfs(1,0);
    int ans=max(d[1][1],d[1][0]);//ans���߿�����������
    if (ans*2>=K)
      printf("%d\n",(K+1)/2);
    else
      printf("%d\n",ans+K-(ans*2));
   }
 return 0;
}
