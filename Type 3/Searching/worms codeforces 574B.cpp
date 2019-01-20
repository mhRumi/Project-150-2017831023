#include<bits/stdc++.h>
using namespace std;
void search_(int ara[],int last,int num)
{
    int first = 0;
    int  middle = (first+last)/2;
    while (first <= last)

    {
        if(num<ara[middle]&&num>ara[middle-1])
        {
            cout<<middle<<endl;
            break;
        }
        else if(ara[middle] == num)
        {
            cout<<middle<<endl;
            break;
        }
        else if(ara[middle] < num)
        {
            first = middle + 1;

        }


        else
        {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
}
int main()
{
    int n,a,m;
    scanf("%d",&n);
    int ara[n];
    ara[0]=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        ara[i]=a+ara[i-1];

    }
    scanf("%d",&m);
    int arr[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<m; i++)
    {
        search_(ara,n,arr[i]);
    }
    return 0;
}
