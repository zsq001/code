#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define maxn 100001
int wc[maxn],vc[maxn],wj[maxn],vj[maxn];
int main(){
	int n,m,k;
	freopen("sword.in","r",stdin);
	freopen("sword.out","w",stdout);
	scanf("%d%d%d",&n,&m,&k);
	int x,s;
	scanf("%d%d",&x,&s);
	for(int i=1;i<=m;i++){
		scanf("%d",&vj[i]);//���Խ����͵Ĺ�������� x��Ϊ vj[i]
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&wj[i]);//��i�����ܺķѵ� wj[i]ö���
	}
	for(int i=1;i<=k;i++){
		scanf("%d",&vc[i]);//�Թ�Ⱥ�ڿ���ֱ�Ӷ�Ŀ�����d�˺�
	}
	for(int i=1;i<=k;i++){
		scanf("%d",&wc[i]);//�����Թ�Ⱥ����Ҫd���
	}
	int now_money=s;
	long long ans=1ll*n*x;
	for(int j=1;j<=k;j++){
		if(s<wc[j])continue;
		ans=min(ans,1ll*(n-vc[j])*x);
	}
	for(int i=1;i<=m;i++){
		if(x<=vj[i]||s<wj[i])continue;
		if(s==wj[i]){
			ans=min(ans,1ll*n*vj[i]);
			continue;
		}
		now_money=s-wj[i];
		int qwq=vj[i];
		ans=min(ans,1ll*n*qwq);
		for(int j=1;j<=k;j++){
			if(now_money<wc[j])continue;
			ans=min(ans,1ll*(n-vc[j])*qwq);
		}
	}
	printf("%lld",ans);
}
