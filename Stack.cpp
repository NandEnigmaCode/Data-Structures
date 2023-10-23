#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void PrintStackElement(stack<int> &s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
void Push(int &data,Node* &head)
{
    Node* tmp=new Node(data);
    tmp->next=head;
    head=tmp;
}
void Pop(Node* &head)
{
    if(head==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    Node* tmp=head;
    head=head->next;
    tmp->next=NULL;
    cout<<tmp->data<<" POPPED"<<endl;
    delete tmp;
}
void Top(Node* &head)
{
    if(head==NULL)    
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    cout<<"Top element is "<<head->data<<endl;
}
void PrintStack(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.empty()<<" Checking empty"<<endl;
    cout<<s.size()<<" Checking size"<<endl;
    PrintStackElement(s);
    Node *head=NULL;
    int data=5;
    Push(data,head);
    data=6;
    Push(data,head);
    data=7;
    Push(data,head);
    PrintStack(head);
    Pop(head);
    Pop(head);
    PrintStack(head);
}