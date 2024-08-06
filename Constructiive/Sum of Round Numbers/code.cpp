#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=stoi(s);
        vector<int>ans;
        for(int i=1;i<s.length();i++){
            bool f=true;
            if(s[i]!='0'){
               
                if(ans.size()==0){
                    int x=stoi(s.substr(i,s.length()-1));
                    ans.push_back(n-x);
                }
                else{
                    f=false;
                    int x=stoi(s.substr(i,s.length()-1));
                    int j=0;
                    int temp=n;
                    while(j<ans.size()){
                        temp-=ans[j];
                        j++;
                    }
                    ans.push_back(temp-x);
                }
            }
            else if(i==s.length()-1 && f==true){
                int x=stoi(s.substr(i,s.length()-1));
                    int j=0;
                    int temp=n;
                    while(j<ans.size()){
                        temp-=ans[j];
                        j++;
                    }
                    ans.push_back(temp-x);

            }
        }
        if(s[s.length()-1]!='0') ans.push_back(s[s.length()-1]-'0');
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    }
}
