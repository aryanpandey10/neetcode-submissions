class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for (string s : strs) {
            result = result + to_string(s.length()) + "#" + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;           // '#' tak jao
            int len = stoi(s.substr(i, j - i)); // length nikalo
            res.push_back(s.substr(j + 1, len)); // utne chars padho
            i = j + 1 + len;                    // next string pe jao
        }
        return res;
    }
};
