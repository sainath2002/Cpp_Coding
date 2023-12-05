#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
    deque<int>deq1;
    deq1.push_back(1);
    deq1.push_back(7);
    deq1.push_front(3);
    deq1.push_back(5);
    deq1.push_front(6);
    cout<<deq1.front()<<"\n";
    cout<<deq1.back()<<"\n";
    cout<<deq1.size()<<"\n";
    deq1.push_back(2);
    deq1.push_front(22);
    deq1.pop_back();
    deq1.pop_front();
    for(auto it=deq1.begin();it!=deq1.end();it++)
    cout<<*it<<" ";
    cout<<deq1.empty();
    return 0;

}