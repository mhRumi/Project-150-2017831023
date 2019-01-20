#include<bits/stdc++.h>
using namespace std;
#define MX 100000
int main()
{
    int T;
    cin>>T;
    for(int k=1;k<=T;k++)
    {
        int n,m,u,v,w;
        vector<int>edge[500],cost[500];
        cin>>n>>m;
        int dist[n];
        for(int j=0;j<n;j++)
            dist[j]=MX;


        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        int t;
        cin>>t;
        queue<int>Q;
        dist[t]=0;
        Q.push(t);
        while(!Q.empty())
        {
            int u=Q.front();
            Q.pop();
            for(int i=0;i<edge[u].size();i++)
            {
                int v=edge[u][i];
                int temp=max(dist[u],cost[u][i]);
                if(temp<dist[v])
                {
                    dist[v]=temp;
                    Q.push(v);
                }
            }
        }
        cout<<"Case "<<k<<":"<<endl;
        for(int i=0;i<n;i++)
        {

            if(dist[i]==MX)
                cout<<"Impossible"<<endl;
            else
                cout<<dist[i]<<endl;

        }

    }
    return 0;
}
