#include<iostream>
using namespace std;
int partition(int *arr,int& s,int& e)
{
    int pindx=s;
    int pele=arr[s];
    int i=s+1,j=e;
    while(i<=j)
    {
        if(arr[i]<=pele && arr[j]>pele)
        {
            i++;
            j--;
        }
        else if(arr[i]>pele && arr[j]<=pele)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]>pele && arr[j]>pele)
        {
            j--;
        }
        else if(arr[i]<=pele && arr[j]<=pele)
        {
            i++;
        }
    }
    swap(arr[pindx],arr[j]);
    return j;
}
int random_partition(int arr[],int& s,int& e)
{
    srand(time(NULL));
    int n=e-s+1;
    int rand_pivot_indx= rand() % (n);
    swap(arr[s+rand_pivot_indx],arr[s]);//important line ##
    return partition(arr,s,e);
}
void quicksort(int* arr,int s,int e)
{
    if(s>e)
        return;
    int pi=random_partition(arr,s,e);
    quicksort(arr,s,pi-1);
    quicksort(arr,pi+1,e);
}
void print(int arr[],int& n)
{
    int i;
    cout<<"Array elements"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    int array[]={140,6,3,1,-5,1,100,12,13,8,9,6,10,200};
    int n=14;
    print(array,n);
    int s=0,e=n-1;
    quicksort(array,s,e);
    cout<<endl<<"After sorted"<<endl;
    print(array,n);
    return 0;
}