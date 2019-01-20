#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    string fix="";
    int num=0;
    int count;
    while(cin>>s)
    {
        string a="";
    if(s=="E-N-D")
        break;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])||s[i]=='-'){
           a=a+s[i];
           count++;
        }
    }
    if(count>num){
        fix="";
        fix=a;
        num=count;
    }
    count=0;

    }
    transform(fix.begin(),fix.end(),fix.begin(),::tolower);
    cout<<fix<<endl;

}
