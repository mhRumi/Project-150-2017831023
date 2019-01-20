#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {

        int i;
        priority_queue< long long , vector<long long> , greater <long long> >pq;
        for(i=0; i<t; i++)
        {
            long long n;
            cin>>n;
            pq.push(n);
        }
        long long  sum=0,sum1=0,sum2=0,cost=0;
        while(pq.size()>1)
        {
            sum1=pq.top();
            pq.pop();
            sum2=pq.top();
            pq.pop();
            sum=sum1+sum2;
            pq.push(sum);
            cost=cost+sum;
        }
        cout<<cost<<endl;
        cin>>t;
    }
    return 0;
}


