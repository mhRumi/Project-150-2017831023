#include <bits/stdc++.h>

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
        //cout<<"paisi"<<endl;
  }
}
//int c=0;
void mergesort(int arr[], int left, int right)

{

    //c++;
     //cout<<"called: "<<left<<" "<<right<<endl;
    // cout<<"***"<<c<<endl;
    if(left<right)
    {
        int mid = left+(right-left)/2;
        //cout<<mid<<endl;
        //Sort first and second halves
        // cout<<"1st margesort call: "<<left <<" "<<mid<<endl;
        mergesort(arr, left, mid);
        //cout<<"2nd margesort call: "<<mid+1 <<" "<<right<<endl;
        //c++;
        //cout<<"###"<<c<<endl;
        mergesort(arr, mid+1, right);
       // cout<<left<<" "<<mid<<" "<<right<<endl;
       // c++;
       // cout<<"&&&"<<c<<endl;
        merge_(arr, left, mid, right);
    }
}

void printArray(int A[], int size_)
{
    int i;
    for(i=0; i<size_; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int n;
    cout<<"total numbers:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
   // int arr[]={12, 11, 13, 5, 6, 7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);
    //cout<<" margesort call:"<<" 0"<<" 5"<<endl;
    mergesort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    return 0;
}
