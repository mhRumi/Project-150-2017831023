#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int c=T;
    while(T--)
    {
        set<int,greater<int>>myset;
        set<int>::iterator it;
        it=myset.begin();
        int s,t,x,num,a;
        cin>>s>>t;
        if(s>=t ||t-s==1||s<4)
        {
            cout<<"Case "<<c-T<<": "<<-1<<endl;
            goto here;
        }
        a=s;
        while(a>1)
        {
            for(int i=2; i<=a; i++)
            {
                if(a%i==0)
                {
                    a=a/i;
                    myset.insert(i);
                    break;

                }

            }
        }
        it=myset.begin();
        num=myset.size();
        while(num--)
        {
            x=*it;
            it++;
            if(x==s)
            {
                cout<<"Case "<<c-T<<": "<<-1<<endl;
                break;
            }
            else if((t-s)%x==0)
            {
                cout<<"Case "<<c-T<<": "<<(t-s)/x<<endl;
                break;
            }
        }
        if(num==-1)
        cout<<"Case "<<c-T<<": "<<-1<<endl;

here:
        ;
    }

}
