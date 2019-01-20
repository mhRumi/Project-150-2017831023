#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j=0;
    cin>>t;
    string s;
    for(i=0; i<t; i++)
    {
        cin>>s;
        cout<<"Case "<<i+1<<": " ;
        for(j=0;j<s.size();j++){
            if(isalpha(s[j])){
                    int sum=0;
                    int num;
                for(int k=j+1;isdigit(s[k]);k++){
                    num=s[k]-'0';
                    sum=(sum*10)+num;
                }
                for(int k=0;k<sum;k++)
                    cout<<s[j];
            }
        }
        cout<<endl;

    }
    return 0;
}
