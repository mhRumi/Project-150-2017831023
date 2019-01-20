
#include<bits/stdc++.h>
using namespace std;
void Insert(string *text,int pos,string *pat){
    string e="",f="";
    int len=(*text).size();
    for(int i=0;i<pos-1;i++)
            e=e+(*text)[i];
    for(int i=pos-1;i<len;i++)
            f=f+(*text)[i];
    *text=e+*pat+f;
}
int main()
{
    string text,pat;
    int pos;
    cout<<"Input the text,the pattern and the position you want to insert serially"<<endl;
    cin>>text;
    cin>>pat;
    cin>>pos;
    Insert(&text,pos,&pat);
    cout<<text;
}
