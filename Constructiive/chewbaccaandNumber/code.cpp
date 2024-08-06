#include<bits/stdc++.h>
using namespace std;
int Pow(long long y){
    if(y==0) return 1;
    return 10*Pow(y-1);

}
int main()
{
    string x;
    cin >> x;

    for (auto& digit : x)
    {
        if (digit > '4')
            digit = '9' - digit + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
    cout << x << endl;
    return 0;
}