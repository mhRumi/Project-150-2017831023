#include<bits/stdc++.h>
using namespace std;
void search_(int n[],int siz,int a){
    int j=0;
     for(int i=0;i<siz;i++){
        if(a==n[i]){

            cout<<a<<" found at "<<i+1<<endl;
            j=1;
            break;

        }
    }
    if(j==0)
        cout<<a<<" not found"<<endl;

}
int main()
{
    int x=0;
    while (1){
        int N,Q;
        cin>>N>>Q;
        if(N==0&&Q==0)
            break;
        int n[N];
        int q[Q];
        for(int i=0;i<N;i++)
            cin>>n[i];
        sort(n,n+N);
        for(int i=0;i<Q;i++)
            cin>>q[i];
        cout<<"CASE# "<<x+1<<":"<<endl;
        for(int i=0;i<Q;i++){
            search_(n,N,q[i]);
        }
        x++;
    }
}
