#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int N=10000001;

int id[N],del[N],a[N],sta[80];
int m,head,tail,tot,top,ans,lastans,czy,x,op;

inline int read(int &x)//���ٶ��� 
{char ch=getchar();
 int f=1;x=0;
 while (ch<'0'||ch>'9') {if(ch=='-')f=-1; ch=getchar();}
 while (ch>='0'&&ch<='9') {x=x*10+ch-'0'; ch=getchar();}
 return x*f;
}

void write(int x)//������� 
{if (!x) {putchar('0');	putchar('\n'); return;}
 int k=0;
 while (x){sta[++k]=x%10; x/=10;}
 while (k) putchar('0'+sta[k--]);
 putchar('\n');
}

int main()
{freopen("tea.in","r",stdin);
 freopen("tea.out","w",stdout);
 read(m);
 read(czy);
 head=1;
 while (m--)
   {read(op);
    if (op==1)
      {read(x);
       if (czy) x^=lastans;//����һ�����Ϊx�ĺ��
       if (x<N) a[x]++;
       while (a[ans]) ans++;//ansΪ��ǰ����a[]����С��� 
      }
    if (op==2)
	  {read(x);
       if (czy) x^=lastans;
       del[++tot]=x;//���Ϊx�ĺ��ɳ��˿��� 
       while (head<=tail && del[tot]<=del[id[tail]]) tail--;//ά��һ�����������Ķ��� 
       id[++tail]=tot;//������洢����del[]�еı�� 
	  }
    if (op==3)
      {++top;
       if (head<=tail && id[head]==top) head++;//������ 
      }
    if (op==4)
      {if (head>tail) write(lastans=ans);//����Ϊ�� 
       else write(lastans=min(ans,del[id[head]]));
      }
   }
 return 0;
}
