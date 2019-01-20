#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool ans=false;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int i=n-1; i>1; i--)
    {
        if(ara[i-2]+ara[i-1]>ara[i])
        {
            cout<<"YES"<<endl;
            ans=true;
            break;
        }
    }
    if(ans==false)
        cout<<"NO"<<endl;
    return 0;

}
