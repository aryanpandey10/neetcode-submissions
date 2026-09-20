class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        for (int i = 0; i < t.length(); i++) {
            if (mp.count(t[i]) == 0) {
                return false;
            }
            mp[t[i]]--;
            if (mp[t[i]] < 0) {
                return false;
            }    
        }
        return true;
    }
};
