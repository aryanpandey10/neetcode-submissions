class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // pehle humne group banaya ak map liya jiske key mein hum sorted string dalenge aur values mein hum orginal string dalenge
       unordered_map<string, vector<string>> mp;
       for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
       }
       vector<vector<string>> groups;
       for (auto x : mp) {
        groups.push_back(x.second);
       }
       return groups;
    }
};
