#include<bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int>maxheap;  //top element will be removed and elements are always stored in decreasing order in maxheap
    maxheap.push(3);
    maxheap.push(5);
    maxheap.push(2);
    maxheap.push(6);
    maxheap.push(5);
    maxheap.push(7);
    cout<<maxheap.size()<<"\n";
    while(!maxheap.empty())
    {
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }
    priority_queue<int,vector<int>,greater<int> >minheap; 
   // Element Type (int): The priority queue will store elements of type int.
   //Container Type (vector<int>): The underlying container used for storage is specified as std::vector<int>. 
   //This means that the elements will be stored in a vector.
   //Comparator (greater<int>): The comparison function (greater<int>) determines the priority order. 
   //In this case, greater<int> represents a functor that ensures that the smallest elements have the highest priority. 
   // Therefore, the priority queue will be a min heap.
    minheap.push(3);
    minheap.push(5);
    minheap.push(2);
    minheap.push(6);
    minheap.push(5);
    minheap.push(7);
    cout<<minheap.size()<<"\n";
    while(!minheap.empty())
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    return 0;

}
  // queue,stack,priorityqueue -->pop ,push ,size ,empty  -->begin and end will not work
  //stack,priority queue -->top  
  //map,unordered map,set ,unordered set ,set,multimap,unordered multimap,multiset,unordered multiset
  // insert,erase,size,find,size,
  //queue-->front,back
  //in case of any set-->count gives the count of the element in the set
  //vector and deque-->front and back ,begin and end
  // in case of maps it->first and it->second 
