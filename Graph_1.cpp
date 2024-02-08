#include<bits/stdc++.h>
using namespace std;
#define xcv endl
class Graph{
    public:
    //an map whose keys are int and values are Linked List whose node's value is pair
    //pair denotes the destination vertex along with the weight associated
    unordered_map<int,list<pair<int,int>>> adjList;
    void addEdge(int src,int dest,int wt,bool is_UnDirected){
        adjList[src].push_back(make_pair(dest,wt));
        if(is_UnDirected){
            adjList[dest].push_back(make_pair(src,wt));
            //O(1) insertion
        }
    }
    void print_AdjList(int source){
        //There may be multiple vertices of one Graph class's object
        //So, one must specify the source
        cout<<source<<"-> {";
        for(auto i:adjList[source]){
            cout<<"( "<<i.first<<","<<i.second<<" ) ";
        }
        cout<<"}";
        cout<<xcv;
    }
};
int main()
{
    Graph g;
    //sample graph with weights and mix of directed and undirected edges
    g.addEdge(1,4,6,1);
    g.addEdge(1,2,7,1);
    g.addEdge(4,3,8,1);
    g.addEdge(2,2,3,1);
    g.addEdge(3,10,1,1);
    g.addEdge(3,9,10,1);
    g.addEdge(2,5,3,0);
    g.addEdge(5,6,3,0);
    g.addEdge(5,8,16,0);
    g.addEdge(8,2,22,1);
    g.addEdge(5,7,12,1);
    g.addEdge(2,7,10,1);
    g.addEdge(8,7,15,0);
    int i;
    for(i=1;i<=10;i++){
        cout<<xcv;
        g.print_AdjList(i);
        cout<<xcv;
    }
    return 0;
}