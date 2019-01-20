#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin>>c;
    getchar();
    while(c--){
        string s;
        getline(cin,s);
        int size=s.size();
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int max=0;
        string out="";
        for(int i=97;i<123;i++){
                int num=0;
                for(int j=0;j<size;j++){
                    if((char)i==s[j])
                      num++;
                }
                if(num>max){
                    max=num;
                    out="";
                    out=(char)i;

                }
                else if(num==max){
                    out=out+(char)i;
                }

        }
        cout<<out<<endl;

    }
    return 0;
}
