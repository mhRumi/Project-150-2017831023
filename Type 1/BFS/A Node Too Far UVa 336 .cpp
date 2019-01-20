#include<bits/stdc++.h>
using namespace std;

//code sikhe sikhe korsi
//map of vector er concept vallagse
int bfs(map<int,vector<int>>edge, map<int,int>visited,int s,int ttl)
{
    pair<int,int>p;
    queue<pair<int,int>>q;
    q.push(make_pair(s,ttl));
    visited[s]=1;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        int parent=p.first;
        ttl=p.second;

        if(ttl==0)
            break;
        int len=edge[parent].size();
        for(int i=0;i<len;i++)
        {
            int child=edge[parent][i];
            if(visited[child]==0)
            {
                visited[child]=1;

                q.push(make_pair(child,ttl-1));
            }
        }
    }
    int ans=0;
    map<int,int>::iterator it;
    for(it=visited.begin();it!=visited.end();it++)
    {
        if(it->second==0)
            ans++;
    }
    return ans;

}

int main()
{
    int C=1;
    while(1)
    {
        int e;
        cin>>e;
        if(e==0)
            return 0;
        map<int,vector<int>>edge;
        map<int,int>visited;
        int x,y;
            for(int i=0;i<e;i++)
            {
                cin>>x>>y;
                edge[x].push_back(y);
                edge[y].push_back(x);
                visited[x]=0;
                visited[y]=0;
            }
        int s,ttl;
            while(1)
            {
                cin>>s>>ttl;
                if(s==0 &&ttl==0)
                    break;
                int ans=bfs(edge,visited,s,ttl);
                cout<<"Case "<<C<<": "<<ans<<" nodes not reachable from node "<<s<<" with TTL = "<<ttl<<"."<<endl;
                C++;
            }
    }
    return 0;
}
