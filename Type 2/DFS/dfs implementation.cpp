#include<bits/stdc++.h>
using namespace std;
int table[100][100]={0};
int edge_id[100];
int visited[100]={0};
//s is starting vartex
//n is number of vertices
void dfs(int s,int n)
{
    cout<<s<<" ";
    visited[s]=1;
		for(int i=0;i<n;i++)
		{
			if(table[s][i]==1&&visited[i]==0)
			{
				//cout<<i<<" " ;
				dfs(i,n);
			}
		}


}



int main()
{
    int n,e;
    cout<<"Number of vertices/nodes : " <<endl;
    cin>>n;
    cout<<"Number of edges: "<<endl;
    cin>>e;
    int n1,n2;
    for(int i=0;i<e;i++)
    {
        cin>>n1>>n2;
        table[n1][n2]=1;

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<table[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Enter the vertice you want to start dfs: "<<endl;
    int p;
    cin>>p;
    dfs(p,n);

    for(int i=0;i<n;i++){
        if(visited[i]==0)
            dfs(i,n);
    }
    return 0;

}

