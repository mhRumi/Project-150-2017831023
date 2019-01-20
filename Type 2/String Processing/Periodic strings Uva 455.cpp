#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,k,l,len,res;
    string str,check;
    cin >> num;
    while(num--)
    {

        cin >> str;
        len=1;
        check="";
        while(1)
        {

            if(len<=str.size()/2)
            {
                check="";
                for(int r=0;r<len;r++)
                check=check+str[r];
                res=0;
                for(l=0; l<check.size(); l++)
                {
                    for(j=l+len; j<str.size(); j=j+len)
                    {
                        if(check[l]!=str[j])
                        {
                            goto here;
                        }
                        else
                        {
                            res++;
                        }
                    }
                }
            if(str.size()%len==0){
                if(res+len==str.size())
                {

                    cout<<len<<endl;

                    goto there;
                }
            }

            }
            else
            {
                cout<<str.size()<<endl;
                goto there;
            }
here:
            ;
            if(str.size()%2!=0)
             len=len+2;
            else
            len++;

        }

there:
        ;
        if(num)
            cout<<endl;
    }
    return 0;
}

