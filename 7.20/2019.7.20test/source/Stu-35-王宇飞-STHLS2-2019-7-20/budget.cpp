 
#include<bits/stdc++.h>
using namespace std; 
long long int money,n,countt,cnt,bel[100],pri[100],imp[100],val[100],i,j,k,fz[100],FZ[100][100],fj[100],nof[100],dp[100],po;
int main () {
	freopen("budget.in","r",stdin);
	freopen("budget.out","w",stdout);
	cin>>money>>n;
	for(i=1;i<=n;i++){
		cin>>pri[i]>>imp[i]>>bel[i];
		val[i]=pri[i]*imp[i];
		fz[i]=i;
		if(bel[i]){//���һ�������Ʒ ֻ��һ������ 
			fj[bel[i]]++;
			n++;
			i++;
			pri[i]=pri[i-1]+pri[bel[i-1]];
			val[i]=val[i-1]+val[bel[i-1]];
			fz[i]=bel[i-1];
		} 
	}
	for(i=1;i<=n;i++){
		if(fj[i]==2){
			countt++;
			for(j=1;j<=n;j++){
				if(bel[j]==i){
					pri[n+countt]+=pri[j];
					val[n+countt]+=val[j];
				}
				
			}
			pri[n+countt]+=pri[i];
			val[n+countt]+=val[i];
			fz[n+countt]=i;
		}
	}//���һ�������Ʒ ���������� 
	n+=countt;
	for(i=1;i<=n;i++){
		if(bel[i]){
			pri[i]=0;
			imp[i]=0;
			bel[i]=0;
			val[i]=0;
			fz[i]=0;
		}
	}//��ո��������� 
	/*fz[1]�д�ŵ���λ��Ϊ1����Ʒ�ķ��� fzΪ0���Ǹ���
	Ҫ����һ��FZ���� ʹ��FZ[1][n]�д�ŵ��Ƿ���Ϊ1�ĵ�n������λ�� 
	*/ 
	for(i=1;i<=n;i++){
		cnt=0;
		for(j=i;j<=n;j++){
			if(fz[i]==fz[j]&&fz[i]!=0){
				FZ[i][++cnt]=j;
			}
		}
		nof[i]=cnt;
	}
	for(i=1;i<=n;i++){
		for(j=money;j>=1;j--){
			po=1;
			for(k=FZ[i][1];po<=nof[i];k=FZ[i][po++]){
				if(j-pri[k]>=0) {
					dp[j]=max(dp[j],dp[j-pri[k]]+val[k]);
				}
			}
		}
	}
	if(n==1) 	cout<<dp[money];
	else cout<<dp[money]-1;
	return 0;
}
