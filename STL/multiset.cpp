#include<bits/stdc++.h>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{ multiset<int>s1; //stores elements in increasing order 
 //unordered_multiset<int>s1;  -->stores the elements in any order
s1.insert(1);
s1.insert(2);
s1.insert(1);
s1.insert(3);
s1.insert(5);
s1.insert(88);
s1.insert(23);
for(auto it=s1.begin();it!=s1.end();it++)
{
    cout<<*it<<"\n";
}
 cout<<*(s1.find(2))<<"\n";
 cout<<s1.count(4)<<"\n";
 cout<<s1.size()<<"\n";
 s1.erase(88);
 s1.erase(1); //deletes the all occurences of 1
 s1.erase(s1.find(23),s1.end());
 s1.erase(s1.find(5));
 cout<<s1.empty()<<"\n";
 for(auto it=s1.begin();it!=s1.end();it++)
 {
    cout<<*it<<"\n";
 }
 return 0;
}