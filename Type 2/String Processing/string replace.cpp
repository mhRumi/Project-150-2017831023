#include<bits/stdc++.h>
using namespace std;
void Replace(string *text,string *pat1,string *pat2)
{
    int p=0;

    int x=1;
    while(x)
    {
        x=0;
        string e="",f="";
        int i,j,index=0;
        int tl=(*text).size();
        int pl=(*pat1).size();
        int max=tl-pl+1;
        for(i=p; i<max; i++)
        {
            if(i>=max)
                break;
            for( j=0; j<pl; j++)
            {
                if((*pat1)[j]!=(*text)[i+j])
                    break;
            }
            if(j==pl)
            {
                index=i+1;
                x=1;
                p=i+(*pat2).size();
                for(int i=0; i<index-1; i++)
                    e=e+(*text)[i];
                for(int i=index-1+pl; i<tl; i++)
                    f=f+(*text)[i];
                *text=e+*pat2+f;
                break;
            }
        }


    }


}


int main()
{
    string text,pat1,pat2;
    cout<<"Input the text,the pattern you want to remove and the pattern you want to replace serially"<<endl;
    cin>>text>>pat1>>pat2;
    Replace(&text,&pat1,&pat2);
    cout<<text;
}

