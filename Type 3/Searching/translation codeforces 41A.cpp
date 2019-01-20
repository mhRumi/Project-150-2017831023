#include<bits/stdc++.h>
using namespace std;
int main()
{
    string suja;
    string ulta;
    cin>>suja;
    cin>>ulta;
    reverse(ulta.begin(),ulta.end());
    if(suja==ulta)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
