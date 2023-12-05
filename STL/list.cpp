#include<bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    l1.push_back(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_back(0);
    l1.push_back(212);
    cout<<l1.size()<<"\n";
    cout<<l1.empty()<<"\n";
    cout<<l1.front()<<"\n";
    cout<<l1.back()<<"\n";
    l1.reverse();
    l1.sort();
    l1.pop_back();
    l1.pop_front();
    l1.pop_back();
    l1.pop_front();
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
    
}