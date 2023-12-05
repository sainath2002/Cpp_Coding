#include <bits/stdc++.h>
using namespace std;

int main() {
    //map<int,string>mp1; ---orderded map(key value pairs are sorted based on the less (<) than operator of keys)
    //map -->O(logn) --every case
    //unordered map-->no order -->O(1)--Average case,O(N)-->Worst case
    //duplicate keys are not allowed in maps both in ordered and unordered
    unordered_map<int, string> mp1;
    mp1.insert(make_pair(1, "sai"));
    mp1.insert(make_pair(2, "sai"));
    mp1.insert(make_pair(0, "sainath"));
    mp1.insert(make_pair(4, "nath"));
    //insertions can be done like below also
    // mp1.insert({1, "sai"});
    // mp1.insert({2, "sn"});
    // mp1.insert({0, "sainath"});
    // mp1.insert({4, "nath"});
    mp1[6] = "hello"; // a method to insert
    mp1.insert(make_pair(7, "world")); // another way of inserting

    for (auto it = mp1.begin(); it != mp1.end(); it++) {
        cout << it->first << " to " << it->second << "\n"; // Added the missing semicolon
    }
    cout<<mp1.size()<<"\n";
    cout<<mp1.empty()<<"\n";
    auto it=mp1.find(2);
    cout<<it->first<<"to"<<it->second;
    mp1.erase(0);
    for (auto it = mp1.begin(); it != mp1.end(); it++) {
        cout << it->first << " to " << it->second << "\n"; // Added the missing semicolon
    }
    mp1.erase(mp1.begin());//deletion by passing an iterator
    mp1.erase(mp1.begin(),mp1.end());//deleting range of elements

    return 0;
}
