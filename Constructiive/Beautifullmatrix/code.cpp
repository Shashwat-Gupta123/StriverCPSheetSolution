#include<bits/stdc++.h>
using namespace std;
int main(){
    int row=0;
    int col=0;
    for(int i=1;i<=5;i++){
        int x1,x2,x3,x4,x5;
        cin>>x1>>x2>>x3>>x4>>x5;
        if(x1==1){
            row=i;
            col=1;
            
        }
        else if(x2==1){
            row=i;
            col=2;
        }
        else if(x3==1){
            row=i;
            col=3;
        }
        else if(x4==1){
            row=i;
            col=4;
        }
        else if(x5==1){
            row=i;
            col=5;
        }
    }
    int swap=abs(3-row)+abs(3-col);
    cout<<swap<<'\n';
}