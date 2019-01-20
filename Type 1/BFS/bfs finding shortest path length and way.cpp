#include<bits/stdc++.h>
using namespace std;

int node,edge;
int sn,en;

int table[200][200];
int origin[200];
int visited[100];
int queue_[100];
int fron=0;
int rear=0;
int x=1;


void bfs(int n, int EN,int node)
{
    origin[0]=-1;
    queue_[0]=n;
    visited[n] = 1;
    while(queue_[rear]!=EN)
    {
        n = queue_[fron];
        for(int i=0; i<node; i++)
        {
            if(table[n][i]==1 && visited[i]==0)
            {
                visited[i] =1 ;
                origin[x]=queue_[fron];
                rear++;
                x++;
                queue_[rear]=i;
                if(queue_[rear]==EN)
                    break;
            }
        }
        fron++;
    }
}
int main()
{
    int i,j,p,q;
    cout<<"Node and edge: "<<endl;
    cin>>node>>edge;

    for(i= 0; i< edge; i++)
    {
        cin>>p>>q;
        table[p][q]=1;
       table[q][p]=1;
    }
    cout<<"starting node:"<<endl;
    cin>>sn;
    cout<<"ending node:"<<endl;
    cin>>en;
    bfs(sn,en,node);
     for(i=0;; i++)
    {
        cout<<queue_[i]<<" ";
        cout<<origin[i]<<" "<<endl;
        if(queue_[i]==en)
            break;
    }
    int z=queue_[rear];
    int length =0;
    //cout<<"||||||"<<endl;
    cout<<z<<"<- ";
    int temp;
    bool y=1;
    if(sn==en){
        cout<<z<<endl;
        y=0;

    }
    while(y)
    {

        for(int  i=0;i<=rear;i++)
        {
            if(queue_[i]==z){
                z=origin[i];
                i=0;
                break;
            }
        }
        length++;
        if(z==sn){
                  cout<<z<<endl;
            break;
        }
        else
         cout<<z<<"<- ";

    }
    cout<<length<<endl;
    return 0;
}


