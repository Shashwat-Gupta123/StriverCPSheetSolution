#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int dp[2005][2005][10];
vector<int>s1;
vector<int>s2;
int f(int i,int j,int k){
	if(i>=n || j>=m) return 0;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
	if(s1[i]==s2[j]) return dp[i][j][k]=1+f(i+1,j+1,k);
	else{
		if(k>0){
			return dp[i][j][k]=max(1+f(i+1,j+1,k-1),max(f(i+1,j,k),f(i,j+1,k)));
		}
		else{
			return dp[i][j][k]=max(f(i+1,j,k),f(i,j+1,k));
		}
	}
}
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		s1.push_back(temp);
	}
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		s2.push_back(temp);
	}
         memset(dp,-1,sizeof(dp));
	cout<<f(0,0,k);
}