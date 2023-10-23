#include <bits/stdc++.h>
using namespace std;
void Enqueue(int arr[],int &front,int&back,int& element,int& n)
{
    if(back>n-1){
        cout<<"Overflow\n";
        return;
    }
    else
    {
        if(front==-1 && back==-1)
        {
            front++;
            back++;
            arr[front]=element;
        }
        else
        {
            back++;
            arr[back]=element;
        }
    }
}
void Dequeue(int arr[],int& front,int& back)
{
    if(front==-1)
        cout<<"Element can't be removed from stack\n";
    else
    {
        if(front==back){
            front=-1;
            back=-1;
        }
        else
        {
            front++;
        }
    }
}
void front_back(int arr[],int& front,int &back)
{
    if(front!=-1&& back!=-1)
        cout<<arr[front]<<" "<<arr[back]<<endl;
}
bool isEmpty(int& front,int& back)
{
    if(front==-1 && back==-1)
        return true;
    else
        return false;
}

/* -----------Just for Testing Purpose-----------   */
void PrintStack(int arr[],int &front,int &back)
{
    for(int i=front;i<=back;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main() {
    int n;
    cout<<"Enter number of elements in Queue\n";
    cin>>n;
    int *arr=new int[n];
    int front=-1,back=-1;
    int element;
    int ch;
    for(int i=0;i<15;i++)
    {
        cout<<"Press 1 to enque\n";
        cout<<"Press 2 to dequeue\n";
        cout<<"Press 3 to display front and back\n";
        cout<<"Press 4 to check Queue is empty or not\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter element to enqueue\n";
            cin>>element;
            Enqueue(arr,front,back,element,n);
            break;
            case 2:
            Dequeue(arr,front,back);
            break;
            case 3:
            front_back(arr,front,back);
            break;
            case 4:
            if(isEmpty(front,back))
                cout<<"Empty\n";
            else
                cout<<"Not empty\n";
            
        }
        PrintStack(arr,front,back);
    }
}