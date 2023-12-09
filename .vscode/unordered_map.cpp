#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> mp1;
    mp1.insert({1, "sai"});
    mp1.insert({2, "sn"});
    mp1.insert({0, "sainath"});
    mp1.insert({4, "nath"});
    mp1[6] = "hello"; // a method to insert
    mp1.insert(make_pair(7, "world")); // another way of inserting

    for (auto it = mp1.begin(); it != mp1.end(); it++) {
        cout << it->first << " to " << it->second << "\n"; // Added the missing semicolon
    }
     
    return 0;
}
