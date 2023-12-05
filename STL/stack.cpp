#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int>s1;
    s1.push(1);
    s1.push(3);
    s1.push(0);
    s1.push(10);
    s1.push(-1);
    cout<<s1.size()<<"\n";
    cout<<s1.top()<<"\n";
    cout<<s1.size()<<"\n";
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}