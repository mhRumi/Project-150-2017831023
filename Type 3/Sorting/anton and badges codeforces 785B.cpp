#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int ara1[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        cin>>ara1[i];
    }
    sort(ara1,ara1+n);
    sort(arr1,arr1+n);

    int m;
    cin>>m;
    int ara2[m];
    int arr2[m];
     for(int i=0;i<m;i++){
        cin>>ara2[i];
        cin>>arr2[i];
    }
    sort(ara2,ara2+m);
    sort(arr2,arr2+m);
    int x1=ara2[m-1]-ara1[0];
    //cout<<ara2[m-1]<<" "<<ara1[0]<<endl;
    int x2=arr1[n-1]-arr2[0];
    //cout<<arr1[n-1]<<" "<<arr2[0]<<endl;

    if(x1<0&&x2<0)
        cout<<0<<endl;
    else if(x1>=x2)
        cout<<x1<<endl;
    else
        cout<<x2<<endl;
    return 0;
}
