#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    int arr[3];
    cin>>x1>>x2>>x3;
    arr[0]=x1;
    arr[1]=x2;
    arr[2]=x3;
    sort(arr,arr+3);
    x1=arr[0];
    x2=arr[1];
    x3=arr[2];
    int l=arr[0];
    int h=arr[2];
    int ans=abs(x1-x2)+abs(x2-x2)+abs(x3-x2);
    while(l<=h){
        int mid=l+(h-l)/2;
        int temp=abs(x1-mid)+abs(x2-mid)+abs(x3-mid);
        if(ans>temp) {
            ans=temp;
            l=mid+1;
        }
        else h=mid-1;
    }
    cout<<ans<<endl;

}
    