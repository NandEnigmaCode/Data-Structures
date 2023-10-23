#include <bits/stdc++.h>
using namespace std;
void Push(int arr[],int &top,int& n,int& element)
{
    if(top==n-1)
    {
        cout<<"Stack Overflow\n";
        return;
    }
    top++;
    arr[top]=element; 
}
void Pop(int arr[],int& top,int &n)
{
    if(top==-1)
    {
        cout<<"Stack Underflow\n";
        return;
    }
    top--;
}
void printStack(int arr[],int& top)
{
    cout<<"\n";
    for(int i=top;i>-1;i--)
    {
        cout<<arr[i]<<endl;
    }
}
void peek(int arr[],int &top)
{
    if(top==-1){
        cout<<" Stack Empty\n";
        return;
    }
    cout<<arr[top]<<endl;
}
bool is_Empty(int& top)
{
    if(top==-1)
        return true;
    else
        return false;
}
int main() {
    int n;
    cout<<"Enter stack Length\n";
    cin>>n;
    int *arr=new int[n];
    int top=-1;
    int ch;
    for(int x=0;x<10;x++)
    {
        cout<<"Enter 1 to push element in stack\n";
        cout<<"Enter 2 to pop element in stack\n";
        cout<<"Enter 3 to peek into stack\n";
        cout<<"Enter 4 to check empty stack is empty or not\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            int element;
            cout<<"Enter element\n";
            cin>>element;
            Push(arr,top,n,element);
            break;
            case 2:
            Pop(arr,top,n);
            break;
            case 3:
            peek(arr,top);
            break;
            case 4:
            cout<<is_Empty(top)<<endl;
            break;
            default:
            cout<<"Wrong Choice\n";
        }
        printStack(arr,top);
    }
    return 0;
}