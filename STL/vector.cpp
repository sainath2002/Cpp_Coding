#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<int>nums;
nums.push_back(1); //inserts an element at back of vector
nums.push_back(0);
nums.push_back(9);
nums.push_back(8);
nums.push_back(2);
for(auto it=nums.begin();it!=nums.end();it++)
cout<<*it<<" ";
nums.insert(nums.begin(),6); //inserting an element at a particular position by passing an iterator
nums.erase(nums.begin()); //deleting an element at a particular position
cout<<nums.size()<<"\n";
//nums.clear()  -->deletes the entire vector
auto var= nums.front(); //front returns a reference variable to first element
cout<<var<<"\n";
auto var1=nums.back(); //back returns a reference variable to last element
cout<<var1<<"\n";
cout<<nums.size()<<"\n";
cout<<nums.empty()<<"\n"; //returns 1 if vector is empty else 0
nums.pop_back(); //deletes the last element
return 0;
}