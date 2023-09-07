#include<iostream>
using namespace std;
void input(int *arr,int& n)
{
    int i;
    //input values
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element in array"<<endl;
        cin>>arr[i];
    }
}
void print(int *arr,int& n)
{
    //Print values
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"ARRAY ELEMENT NUMBER "<<i+1<<" is "<<arr[i];
    }
}
void insert(int *arr,int& n,int& pos,int& ele)
{
    if(pos<=0)
        return;
    int j=n-1;
    int newPos=pos-1;
    while(j>=newPos)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[newPos]=ele;
    n++;
}
void deleteEle(int *arr,int &n,int &pos)
{
    if(j==n-1)
        n--;
    int j=pos-1;
    int last=n-2;
    while(j<=last)
    {
        arr[j]=arr[j+1];
        j++;
    }
    n--;
}
bool LinearSearch(int *arr,int& n,int& key,int& indx)
{
    int i;
    bool flag=false;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            falg=true;
            indx=i;
            break;
        }
    }
    return flag;
}
bool binarySearch(int *arr,int& n,int& key,int& indx)
{
    int s=0;
    int e=n-1;
    int mid;
    bool flag=false;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            flag=true;
            indx=mid;
            break;
        }
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
    }
    return flag;
}
int main()
{
    int n;
    cout<<"Enter array Size in integer"<<endl;
    //Creating Array
    int *arr=new int[n];
    //inputElements
    input(arr,n);
    //printing values
    print(arr,n);
    //Updating values
    int ele,pos;
    cout<<"Updating"<<endl;
    cout<<"Enter position with first element starting from 1"<<endl;
    cin>>pos;
    cout<<"Enter element to be updated"<<endl;
    cin>>ele;
    if(pos>=1 && pos<=n)
        arr[pos-1]=ele;
    //Inserting values
    cout<<"Inserting Values"<<endl;
    cout<<"Enter position with first element starting from 1"<<endl;
    cin>>pos;
    cout<<"Enter element to be inserted"<<endl;
    cin>>ele;
    insert(arr,n,pos,ele);
    print(arr,n);
    //Delete
    deleteEle(arr,n,pos);
    print(arr,n);
    //Searching values
    int key,indx=-1;
    cout<<"Enter key"<<endl;
    cin>>key;
    if(LinearSearch(arr,n,key,indx))
        cout<<"Found key at "<<indx<<endl;
    else
        cout<<"Not Found key"<<endl;
    //will do sorting before
    if(binarySearch(arr,n,key,indx))
        cout<<"Found key at "<<indx<<endl;
    else
        cout<<"Not Found key"<<endl;
    return 0;
}