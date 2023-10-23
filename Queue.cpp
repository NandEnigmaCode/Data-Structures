#include <bits/stdc++.h>
using namespace std;
void printQueue(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        //Note front
        q.pop();
    }
}
class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void Push(Node* &head,Node* &tail,int d)
{
    Node* tmp=new Node(d);
    if(tail==NULL && head==NULL)
    {
        tail=tmp;
        head=tmp;
        return;
    }
    tail->next=tmp;
    tail=tmp;
    // if(head==NULL)
    //     head=tail; 
}
void Pop(Node* &head,Node* &tail)
{
    if(head==NULL && tail==NULL){
        cout<<"Cannot Dequeue\n";
        return;
    }
    if(head==tail)
    {
        Node* xy=head;
        head=head->next;
        tail=tail->next;
        Node* yz=tail;
        delete xy;
        delete yz;
    }
    Node* tmp=head;
    head=head->next;
    cout<<tmp->data<<" Data dequed from Queue"<<endl;
    delete tmp;
}
void Front(Node* &head)
{
    if(head==NULL)
    {
        cout<<"Cannot show front element\n";
        return;
    }
    cout<<"Front element is ";
    cout<<head->data<<endl;
}
void PrintQUEUE(Node* head)
{
    Node* tmp=NULL;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        tmp=head;
        head=head->next;
        delete tmp;
    }
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.size()<<" Checking Size"<<endl;
    cout<<q.empty()<<" Checking Empty"<<endl;
    printQueue(q);
    cout<<endl;
    Node* head=NULL;
    Node* tail=NULL;
    Push(head,tail,1);
    Push(head,tail,2);
    Push(head,tail,3);
    Push(head,tail,4);
    Push(head,tail,5);
    Front(head);
    Pop(head,tail);
    Pop(head,tail);
    PrintQUEUE(head);
    return 0;
}