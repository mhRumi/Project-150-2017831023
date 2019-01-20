#include<bits/stdc++.h>
using namespace std;
void reverse(int s){
  int p=0,remainder;
  while(s>0){
    remainder=s%10;
    p=remainder;
    cout<<p;
    s=s/10;
  }
}
  void cout2(int x,int y){
      int sum;
      sum=x*10+y;
      cout<<char(sum);
  }
  void cout3(int x,int y,int z){
    int sum;
    sum=x*100+y*10+z;
    cout<<char(sum);
  }
int main()
{
  string x;
    while(getline(cin,x)){

    if(isdigit(x[0])){
        reverse(x.begin(),x.end());
        int m=0;
        while(m<x.size()){
          if((int(x[m])-48)>1){
              cout2(x[m]-48,x[m+1]-48);
              m=m+2;
          }
          else{
            cout3(x[m]-48,x[m+1]-48,x[m+2]-48);
            m=m+3;
          }
        }

    }
     else{
         reverse(x.begin(),x.end());
       for(int i=0;i<x.size();i++){
         reverse(int(x[i]));

       }
    }
    cout<<endl;

  }
    return 0;
}
