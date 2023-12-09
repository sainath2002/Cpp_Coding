#include<bits/stdc++.h>
#include<unordered_set>
#include<iostream>
//time complexity:O(1) -->average case 
//                O(N) -->Worst case
using namespace std;
int main()
{
    unordered_set<int>s1;
    s1.insert(1);
    s1.insert(36);
    s1.insert(33);
    s1.insert(45);
    s1.insert(20);
    s1.insert(16);
    s1.insert(100);
    cout<<s1.count(20)<<"\n"; //prints o when element is present else prints 1
    cout<<s1.count(1)<<"\n";
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<"\n";
    }
   // s1.clear() -> deletes all elements in the set
  cout<<*(s1.find(20))<<"\n";//returns  the iterator to the  position of element passed
  cout<<"the size of the set:"<<s1.size()<<"\n";
  s1.erase(16);//delettion by passing a single element
  s1.erase(s1.find(100)); //deletion by passing an iterator
  s1.erase(s1.find(36),s1.end()); //deleting range of elements by passing starting pos to end pos
  cout<<"\n";
  for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<"\n";
    }
  return 0;
}