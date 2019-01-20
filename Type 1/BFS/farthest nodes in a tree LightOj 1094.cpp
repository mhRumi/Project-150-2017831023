#include<bits/stdc++.h>
using namespace std;
int node;

int x=0;


int bfs(int n,int node,vector<int>edge[],vector<int>cost[])
{

    int visited[node];
    int dist[node];
    memset(visited,-1,sizeof(visited));
    //cout<<visited[1]<<endl;
    for(int i=0;i<node;i++)
        dist[i]=0;
    dist[n]=0;

    priority_queue< pair<int, int> > Q;
    queue<int>queue_;
    queue_.push(n);
    visited[n] = 1;
    while(!queue_.empty())
    {
        n = queue_.front();
        queue_.pop();
        for(int i=0; i<edge[n].size(); i++)
        {
            int v=edge[n][i];


            if(visited[v]==-1)
            {
                visited[v]=1;
                if(dist[v]==0||cost[n][i]+dist[n]>dist[v])
                {
                    dist[v]=dist[n]+cost[n][i];
                    Q.push(make_pair(dist[v],v));
                   // cout<<dist[v]<<" "<<v<<endl;




                    queue_.push(v);
                }

            }
        }
    }
    pair<int, int> top =Q.top();
    if(x==0)
        return top.second;
    return top.first;

}

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        cin>>node;

        vector<int> edge[30000], cost[30000];
        int n1,n2,l;
        for(int i=0; i<node-1; i++)
        {
            cin>>n1>>n2>>l;
            edge[n1].push_back(n2);
            edge[n2].push_back(n1);
            cost[n1].push_back(l);
            cost[n2].push_back(l);

        }
        int ans1=bfs(0,node,edge,cost);
        x++;
        int ans2=bfs(ans1,node,edge,cost);
        cout<<"Case "<<k<<": "<<ans2<<endl;
        x=0;

    }
    return 0;
}




