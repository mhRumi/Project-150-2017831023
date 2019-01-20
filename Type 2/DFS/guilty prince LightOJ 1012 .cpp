#include<bits/stdc++.h>
using namespace std;
int visited[22][22];
int ara[22][22];
int p[]= {-1,0,0,1};
int q[]= {0,1,-1,0};
int n=1;

void dfs(int x,int y)
{
    for(int i=0; i<4; i++)
    {
        if(ara[x+p[i]][y+q[i]]==1&&visited[x+p[i]][y+q[i]]==0)
        {
            visited[x+p[i]][y+q[i]]=1;
            n++;
            dfs(x+p[i],y+q[i]);
        }

    }
}

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int x,y;
        char temp;
        int X,Y;
        cin>>x>>y;
        getchar();
        for(int i=1; i<=y; i++)
        {

            for(int j=1; j<=x; j++)
            {
                visited[i][j]=0;
                temp=getchar();
                if(temp=='.'||temp=='@')
                {
                    ara[i][j]=1;
                    if(temp=='@')
                    {
                        X=i;
                        Y=j;
                    }
                }
                else
                    ara[i][j]=2;

            }
            getchar();
        }
        visited[X][Y]=1;
        dfs(X,Y);
        cout<<"Case "<<k<<": "<<n<<endl;
        n=1;
        memset(visited,0,sizeof(visited));
        memset(ara,0,sizeof(visited));
        cout<<"ee"<<ara[2][2]<<endl;




    }
    return 0;
}


