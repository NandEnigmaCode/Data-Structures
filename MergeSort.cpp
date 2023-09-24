#include<iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e)
{
    int l1=mid-s+1;
    int l2=e-mid;
    //creating two arrays 
    int *subarray1=new int[l1];
    int *subarray2=new int[l2];
    int *finalarray=new int[l1+l2];
    //copying contents of arr into two subarrays
    int i,j;
    for(i=0;i<l1;i++)
        subarray1[i]=arr[i];
    for(j=0;j<l2;j++,i++)
        subarray2[j]=arr[i];
    i=s;
    int sa1=0;
    int sa2=0;
    while(sa1<l1 && sa2<l2)
    {
        if(subarray1[sa1]<subarray2[sa2])
        {
            finalarray[i]=subarray1[sa1];
            sa1++;
            i++;
        }
        else if(subarray2[sa2]<subarray1[sa1])
        {
            finalarray[i]=subarray2[sa2];
            sa2++;
            i++;
        }
        else if(subarray1[sa1]==subarray2[sa2])
        {
            finalarray[i]=subarray1[sa1];
            finalarray[i+1]=subarray2[sa1];
            i=i+2;
            sa1++;
            sa2++;
        }
    }
    while(sa1<l1)
    {
        finalarray[i]=subarray1[sa1];
        sa1++;
        i++;
    }
    while(sa2<l2)
    {
        finalarray[i]=subarray2[sa2];
        i++;
        sa2++;
    }
    //copying back to arr original array
    for(i=s;i<e;i++)
    {
        arr[i]=finalarray[i];
    }
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
    int n;
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