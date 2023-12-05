#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ele;
    ele.push_back(2);
    ele.push_back(1);
    ele.push_back(3);
    ele.push_back(0);
    ele.push_back(8);
    sort(ele.begin(),ele.end());
    for(auto it=ele.begin();it!=ele.end();it++)
    cout<<*it<<" ";
    cout<<"\n";
    auto it=min_element(ele.begin(),ele.end());
    auto it1=max_element(ele.begin(),ele.end());
    cout<<*it<<" ";
    cout<<*it1<<" ";
    return 0;

}