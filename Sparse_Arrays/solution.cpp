#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> freq;
    for (const auto& str : stringList) freq[str]++;
    
    vector<int> result;
    for (const auto& q : queries) result.push_back(freq[q]);
    return result;
}
