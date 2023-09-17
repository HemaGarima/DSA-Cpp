#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // Creation
    // unordered_map<string , int> m;
    map<string , int> m;
    // Insertion
    pair<string , int> p = make_pair("babbar" , 3);
    m.insert(p);
    
    pair<string , int> pair2("love" , 2);
    m.insert(pair2);

    m["mera"] = 1;
    m["mera"] = 2;

    // Search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    // Size
    cout<<m.size()<<endl;
    
    // to check presence
    cout<<m.count("love")<<endl;

    // erase
    m.erase("love");
    cout<<m.size()<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // iterator 
    // unordered_map<string , int> :: iterator it = m.begin();
    map<string , int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    // Time Complexity of map is O(log n).
    // Time Complexity of unordered_map is O(1).
    return 0;
}