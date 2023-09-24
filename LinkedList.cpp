#include<iostream>
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
void Traversal(Node* head)
{
    while(head->next!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* Create(int data)
{
    Node* head=new Node(data);
    return head;
}
void InsertTail(Node* head,int& data)
{
    Node* tail=NULL;//for finding tail
    while(head->next!=NULL)
    {
        head=head->next;
    }
    tail=head;
    //Creating new node
    Node* newTail=new Node(data);
    tail->next=newTail;
}
Node* InsertHead(Node* head,int& data)
{
    Node* hd=new Node(data);
    hd->next=head;
    return hd;
}
void InsertPos(Node* head,int& data,int& pos)
{
    if(pos<=0)
        return;
    int x=1;
    Node* tmp=new Node(data);
    Node* xq=NULL;
    while(x!=pos)
    {
        xq=head;
        head=head->next;
        x++;
    }
    xq->next=tmp;
    tmp->next=head;
}
void Search(Node* head,int data)
{
    int pos=1;
    if(head==NULL)
        cout<<"Not found "<<data<<" in LL"<<endl;
    while(head->next!=NULL)
    {
        if(head->data==data)
        {
            cout<<"Found at "<<pos<<endl;
            break;
        }
        pos++;
    }
}
int main()
{
    //Creating LL
    int data;
    cout<<"Enter data for head"<<endl;
    cin>>data;
    Node* head=Create(data);
    //Adding nodes in the end of LL
    cout<<"Enter data for tail"<<endl;
    cin>>data;
    //Adding nodes in the start of LL
    InsertTail(head,data);
    head=InsertHead(head,data);
    //Randomly inserting at given pos
    int pos;
    cout<<"Enter position from 1 to n"<<endl;
    cin>>pos;
    cout<<"Enter data"<<endl;
    cin>>data;
    return 0;
}