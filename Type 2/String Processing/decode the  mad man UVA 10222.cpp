#include<bits/stdc++.h>
using namespace std;
int main()
{
    string samp ="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string input;
    getline(cin,input);
    transform(input.begin(), input.end(), input.begin(),::tolower);
    //cout<<input<<endl;

    for(int i=0;i<input.size();i++){
      if(input[i]==' '){
         cout<<" ";
      }
      else{
      for(int j=0;j<samp.size();j++){
         if(input[i]==samp[j]){
           cout<<samp[j-2];
          }
        }
      }
    }
    cout<<endl;


    return 0;
}

