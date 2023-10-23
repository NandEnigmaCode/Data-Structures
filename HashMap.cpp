#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Creating of unordered map
    unordered_map<string,int> m;
    //making pair to insert into map
    //3 different ways
    pair<string,int> p=make_pair("Scorpio",9);
    m.insert(p);
    pair<string,int> p2("alto",2);
    m.insert(p2);
    m["fortuner"]=10;//best one

    //access
    cout<<m.at("alto")<<endl;
    cout<<m["fortuner"]<<endl;

    //search
    cout<<m.count("Scorpio")<<endl;
    cout<<m.count("Innova")<<endl;

    //find function
    if(m.find("fortuner")!=m.end())//iterator to end
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not found\n";
    }
    cout<<m.size()<<endl;
    //iterator
    for(auto i:m)
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    
    return 0;
}
