#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=min(((k*l)/(nl)),(c*d));
     int req_salt=x*np;
     int toast=0;
     if(req_salt>p){
        int temp=p/np;
        toast=temp;
     }
     else{
        toast=x;
     }
     if(toast>=n) cout<<toast/n<<'\n';
     else cout<<0<<endl;
    
}