#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[12];
    gets(s);
    int box[]={0,0,64,32,16,8,0,4,2,1,0};
    while(gets(s)){
          if(s[0]=='_')
            break;
        int sum=0;
        for(int i=0;i<11;i++){
            if(s[i]=='o')
                sum=sum+box[i];
        }
        cout<<char(sum);

    }
    return 0;

}
