#include <bits/stdc++.h>
using namespace std;
vector<int>dp;
int N;
vector<int>arr;
int f(int i){
	
	if(i==N-1) return 0;
	if(i==N-2) return abs(arr[N-1]-arr[N-2]);
	if(dp[i]!=-1) return dp[i];
	return dp[i]=min(f(i+1)+abs(arr[i]-arr[i+1]),f(i+2)+abs(arr[i+2]-arr[i]));
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
	dp.resize(1000000,-1);
	N=n;
	arr=heights;
	return f(0);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>h(n);
		for(int i=0;i<n;i++) cin>>h[i];
		cout<<frogJump(n,h)<<endl;
	}
}