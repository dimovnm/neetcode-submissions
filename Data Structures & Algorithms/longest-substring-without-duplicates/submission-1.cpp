class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> pres;
        int maxLen = 1;

        if (s.empty()) return 0;

        int l = 0, r = 1;
        pres.insert(s[l]);
        while (r < s.size()) {
            while (pres.contains(s[r])) {
                pres.erase(s[l]);
                ++l;
            }
            pres.insert(s[r]);
            maxLen = max(maxLen, r + 1 - l);
            ++r;
        }

        return maxLen;
    }
};
