#include<bits/stdc++.h>
using namespace std;
#define SZ 100

vector <int> graph[SZ];
bool visited[SZ];
stack <int> stk;

void DFS(int now)
{
    visited[now] = true;
    int i, to, k;

    k = graph[now].size();

    for(i=0;i<k;i++)
    {
        to = graph[now][i];
        if(visited[to] == false)
        {
            DFS(to);
        }
    }

    stk.push(now);

    return ;
}

int main()
{
    int vertices, edges, from, to, i;

    while(scanf("%d %d",&vertices,&edges))
    {
        for(i=0; i<vertices; i++)
        {
            graph[i].clear();
            visited[i] = false;
        }

        for(i=0; i<edges; i++)
        {
            scanf("%d %d",&from,&to);
            graph[from].push_back(to);
        }

        for(i=0;i<vertices;i++)
        {
            if(visited[i] == false)
            {
                DFS(i);
            }
        }

        while(stk.size() > 0) {
            int vertex = stk.top();
            printf("%d ", vertex);
            stk.pop();
        }
    }

    return 0;
}
