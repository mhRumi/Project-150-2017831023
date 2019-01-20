#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ara[i]==ara[j]&&i!=j){
                count++;
                ara[i]++;
                j=-1;
            }
        }
    }
    cout<<count<<endl;
    return 0;

}
