#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    queue<int>que1;
    que1.push(1); //inserts an element at rear of the que
    que1.push(2);
    que1.push(0);
    que1.push(8);
    que1.push(3);
    cout<<que1.front()<<"\n";
    cout<<que1.back()<<"\n";
    cout<<que1.size()<<"\n";
    while(!que1.empty())
    {
        cout<<que1.front()<<" ";
        que1.pop();
    }
    return 0;
}