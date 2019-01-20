#include<bits/stdc++.h>
using namespace std;

void Delete(string *text,int pos,int l){
    string e="",f="";
    int len=(*text).size();
    for(int i=0;i<pos-1;i++)
            e=e+(*text)[i];
    for(int i=pos-1+l;i<len;i++)
            f=f+(*text)[i];
    *text=e+f;
}

int main()
{
    string text;
    int pos,len;
    cout<<"Input the text,the position and the lenth of the pattern to delete"<<endl;
    cin>>text;
    cin>>pos;
    cin>>len;

    Delete(&text,pos,len);
    cout<<text;
}

