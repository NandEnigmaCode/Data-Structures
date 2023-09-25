#include<iostream>
using namespace std;
void merge(int arr[],int& s,int& mid,int& e)
{
    int l1=mid-s+1;
    int l2=e-mid;
    //creating two arrays 
    int *subarray1=new int[l1];
    int *subarray2=new int[l2];
    //copying contents of arr into two subarrays
    int j;
    for(j=0;j<l1;j++)
        subarray1[j]=arr[s+j];//s+j
    for(j=0;j<l2;j++)
        subarray2[j]=arr[mid+1+j];//mid+1+j
    j=s;
    int sa1=0;
    int sa2=0;
    while(sa1<l1 && sa2<l2)
    {
        if(subarray1[sa1]<subarray2[sa2])
        {
            arr[j]=subarray1[sa1];
            sa1++;
            j++;
        }
        else if(subarray2[sa2]<subarray1[sa1])
        {
            arr[j]=subarray2[sa2];
            sa2++;
            j++;
        }
        else if(subarray1[sa1]==subarray2[sa2])
        {
            arr[j]=subarray1[sa1];
            arr[j+1]=subarray2[sa2];
            j=j+2;
            sa1++;
            sa2++;
        }
    }
    while(sa1<l1)
    {
        arr[j]=subarray1[sa1];
        sa1++;
        j++;
    }
    while(sa2<l2)
    {
        arr[j]=subarray2[sa2];
        j++;
        sa2++;
    }
    delete []subarray1;
    delete []subarray2;
    //copying back to arr original array
    // for(i=s;i<e;i++)
    // {
    //     arr[i]=arr[i];
    // }
}
void mergeSort(int arr[],int s,int e)
{
    if(s>=e)
        return;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main()
{
    int n=0;
    cout<<"Enter array length"<<endl;
    cin>>n;
    int *arr=new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element of array"<<endl;
        cin>>arr[i];
    }
    int s=0,e=n-1;
    mergeSort(arr,s,e);
    //print array
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}