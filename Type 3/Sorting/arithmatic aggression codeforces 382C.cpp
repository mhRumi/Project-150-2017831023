#include<bits/stdc++.h>
using namespace std;


void merge_(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int left, int right)
{
    if(left<right)
    {
        int mid = left+(right-left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge_(arr, left, mid, right);
    }
}

int main()
{
    int c,count=0,ans,a;
    bool flag=false;
    cin>>c;


    int ara[c];
    for(int i=0; i<c; i++)
        cin>>ara[i];
    if(c==1)
    {
        cout<<-1<<endl;
        goto there;
    }
    mergesort(ara, 0,c-1);
    cout<<endl;
    if(c==2)
    {
        if(ara[1]-ara[0]==0)
        {
            cout<<1<<endl;
            cout<<ara[0]<<endl;
            goto there;
        }
        int y=ara[1]-ara[0];
        if((ara[1]-ara[0])%2==0)
        {
            cout<<3<<endl;

            int x=(ara[1]-ara[0])/2;
            cout<<ara[0]-y<<" "<<ara[0]+x<<" "<<ara[1]+y<<endl;
            goto there;
        }
        else
        {
            cout<<2<<endl;
            cout<<ara[0]-y<<" "<<ara[1]+y<<endl;
            goto there;
        }
    }
    else
    {
        int A=0;
        for(int i=1; i<c; i++)
        {
            if(ara[i]==ara[i-1])
                A++;
        }
        if(A==c-1)
        {
            cout<<1<<endl;
            cout<<ara[0]<<endl;

            goto there;
        }

        a =ara[1]-ara[0];
        for(int i=1; i<c; i++)
        {
            if(ara[i]-ara[i-1]!=a)
            {
                count++;
                if(ara[i]-ara[i-1]==2*a)
                {
                    flag=true;
                    ans=ara[i-1]+a;

                }
            }

            if(count>1)
            {
                break;
            }
        }
        if(count==0)
        {
            cout<<2<<endl;
            cout<<ara[0]-a<<" "<<ara[c-1]+a<<endl;
            goto there;
        }
        if(count==1&&flag)
        {
            cout<<1<<endl<<ans<<endl;
            goto there;
        }
        count =0;
        flag=false;
        a=ara[2]-ara[1];
        for(int i=1; i<c; i++)
        {
            if(ara[i]-ara[i-1]!=a)
            {
                count++;
                if(ara[i]-ara[i-1]==2*a)
                {
                    flag=true;
                    ans=ara[i-1]+a;

                }
            }

            if(count>1)
            {
                break;
            }
        }
        if(count==1&&flag)
        {
            cout<<1<<endl<<ans<<endl;
            goto there;
        }
        cout<<0<<endl;


    }
    there:;

    return 0;
}
