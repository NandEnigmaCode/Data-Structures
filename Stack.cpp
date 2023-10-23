#include<iostream>
#include<stack>
using namespace std;
void PrintElementStack(stack<int> &s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        cout<<endl;
    }
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    PrintElementStack(s);
}




