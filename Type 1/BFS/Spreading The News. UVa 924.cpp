#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>friends[],int source,int max_[],int dist[],int E)
{
    max_[source]=0;
    int ans1=0,ans2=0;
    queue<int>q;
    dist[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        int len=friends[s].size();
        for(int i=0;i<len;i++)
        {
            int emp=friends[s][i];
            if(dist[emp]==-1)
            {
                dist[emp]=dist[s]+1;
                q.push(emp);
                max_[dist[emp]]++;
                //cout<<emp<<" k"<<dist[emp]<<" "<<max_[dist[emp]]<<endl;

            }
        }
    }
    for(int x=0;x<E;x++)
    {
        if(max_[x]>ans1)
        {
            ans1=max_[x];
            ans2=x;

        }
        //cout<<max_[x]<<" "<<x<<endl;
    }
    cout<<ans1<<" "<<ans2<<endl;
    return;


}

int main()
{
    int E;
    cin>>E;
    vector<int>friends[E];
    for(int i=0;i<E;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            friends[i].push_back(temp);
        }
    }
    int t;
    int max_[E];
    int dist[E];
    memset(max_,0,sizeof(max_));
    memset(dist,-1,sizeof(dist));
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int source;
        cin>>source;
        //cout<<friends[source].size()<<endl;
        if(friends[source].size()==0)
            cout<<0<<endl;
        else
            bfs(friends,source,max_,dist,E);
        memset(max_,0,sizeof(max_));
        memset(dist,-1,sizeof(dist));
    }
    return 0;
}
