#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>ans;
    ans.resize(n,vector<char>(m,'.'));
    int i=0;
    int j=0;
    while(i<n || j<m){
        // right
        while(j<m){
            ans[i][j]='#';
            j++;
        }
        j--;
        // down
       
        i++;
         if(i>=n) break;
        int temp=i+2;
        while(i<n && i<temp){
            ans[i][j]='#';
            i++;
        }
        if(i<=n) i--;
        else break;
        
        // left
        while(j>=0){
            ans[i][j]='#';
            j--;
        }
        j++;
        //down
        
         i++;
          if(i>=n) break;
         temp=i+2;
        while(i<n && i<temp){
            ans[i][j]='#';
            i++;
        }
        if(i<=n) i--;
        else break;
       

    }
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cout<<ans[i][j];
        }
        cout<<endl;
    }

}