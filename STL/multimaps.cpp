#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{ //difference maps and multimaps is multimaps can store duplicates
    unordered_multimap<int,string>mp1;
    //multimap<int,string>mp2;  
    //mp1[1]="sai"; -->throws an error because [] creates a new key value pair if key donot exist but in multimap we need
    //duplicate keys obviously it will not duplicate key if already a key exists so it will not work in multimap
   // mp1.insert({1,"sainath"}); -->one way of inserting
   mp1.insert(make_pair(1,"sai"));
   mp1.insert(make_pair(1,"sainath"));
   mp1.insert(make_pair(1,"sainath"));
   mp1.insert(make_pair(0,"abced"));
   mp1.insert(make_pair(2,"abcde"));
   for(auto it=mp1.begin();it!=mp1.end();it++)
   cout<<it->first<<"to"<<it->second<<"\n";
   cout<<"size of map is :"<<mp1.size()<<"\n";
   cout<<mp1.empty()<<"\n";
    auto it=mp1.find(1); //if duplicate key is passed then position to the first occurence will be returned
    cout<<it->first<<"to"<<it->second;
    mp1.erase(1); //deletes all occurences of 1
    mp1.erase(mp1.begin());  //deletion by passing iterator
    mp1.erase(mp1.begin(),mp1.end()); //deleting range of elements
    return 0;
    
}