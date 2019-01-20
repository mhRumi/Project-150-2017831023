#include<bits/stdc++.h>
using namespace std;
//vector<int> edge[100], cost[100];
//const int infinity = 10000000;

// edge[i][j] = jth node connected with i
// cost[i][j] = cost of that edge

int bfs(int source, int destination,vector<int>edge[],vector<int>cost[])
{


    int d[101]; // for storing distance
    for(int j = 0; j < 101; j++)
        d[j] = 10000;
    queue<int> q;
    q.push(source);
    d[source] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < edge[u].size(); i++)
        {
            int v = edge[u][i];
            // updating (also known as relaxing)
            if (d[v] > d[u] + cost[u][i])
            {
                d[v] = d[u] + cost[u][i];
                q.push(v);
            }
        }
    }
    return d[destination];

}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        getchar();
        vector<int> edge[101], cost[101];
        int n,e,n1,n2,l;
        cin>>n>>e;
        for(int i=0; i<e; i++)
        {
            cin>>n1>>n2>>l;
            edge[n1].push_back(n2);
            edge[n2].push_back(n1);
            cost[n1].push_back(l);
            cost[n2].push_back(l);


        }
        int ans=bfs(0,n-1,edge,cost);
        if(ans==10000)
            cout<<"Case "<<i+1<<": Impossible"<<endl;
        else
            cout<<"Case "<<i+1<<": "<<ans<<endl;

    }
    return 0;

}
