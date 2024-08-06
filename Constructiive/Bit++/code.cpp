#include <iostream>
using namespace std;
int x=0;
int main() {
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    if(s[0]=='+' || s[2]=='+'){
      x++;
    }
    else if(s[0]=='-' || s[2]=='-'){
        x--;
      }
    
  }
  cout<<x<<endl;
}