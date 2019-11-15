#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int N=100005;

inline int read(int &x)//���ٶ��� 
{char ch=getchar();
 int f=1;x=0;
 while (ch<'0'||ch>'9') {if(ch=='-')f=-1; ch=getchar();}
 while (ch>='0'&&ch<='9') {x=x*10+ch-'0'; ch=getchar();}
 return x*f;
}

int n,m;
int sz[N],dep[N],f[N][17];
vector<int>g[N];

void dfs(int x)
{sz[x]=1;
 for (int i=0; i<g[x].size(); i++)
   {int v=g[x][i];
    if (v!=f[x][0])
      {f[v][0]=x,dep[v]=dep[x]+1;//dep[x]Ϊx����� 
       for (int j=1; j<17; j++)
         f[v][j]=f[f[v][j-1]][j-1];
       dfs(v),sz[x]+=sz[v];//sz[x]��ʾ��xΪ���������ڵ����� 
      }
   }
}

int get(int x,int d)//��x���ϱ�d�������� 
{for (int i=0; i<17; i++)
   if(d & (1<<i)) x=f[x][i];
 return x;
}

int LCA(int x,int y)//��x��y������������� 
{x=get(x,dep[x]-dep[y]);
 if(x==y) return x;
 for (int i=16; i>=0; i--)
   if (f[x][i]!=f[y][i]) x=f[x][i],y=f[y][i];
 return f[x][0];//f[i][j]��ʾ�ڵ�i���ϱ�2^j�������� 
}

void init()
{int x,y;
 read(n);
 for (int i=1; i<n; i++)
   {read(x),read(y);
    g[x].push_back(y);
    g[y].push_back(x);
   }
}

void work()
{int x,y;
 read(m);
 while(m--)
   {read(x),read(y);
    if (dep[x]<dep[y]) swap(x,y);
    if (x==y)//ͬһ���� 
      printf("%d\n",n);
    else
      {int z=LCA(x,y);
       int d=dep[x]-dep[z]+dep[y]-dep[z];
       if(d&1)//���Ϊ�����޽� 
         puts("0");
       else
         {d>>=1;
          int u=get(x,d);//���е�Ϊu 
          if(u==z)//�е���lca�� 
            {x=get(x,d-1);
             y=get(y,d-1);
             printf("%d\n",n-sz[x]-sz[y]);//lca(��)���ϵ����нڵ� 
            }
          else//�е㲻��lca�� 
            {x=get(x,d-1);
             printf("%d\n",sz[u]-sz[x]);
            }
	 }
      }
   }
}

int main()
{freopen("equal.in","r",stdin);
 freopen("equal.out","w",stdout);
 init();	 
 dfs(1);
 work();
 return 0;
}
