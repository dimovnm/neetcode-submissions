class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sublist;
        vector<string> temp;
        unordered_map<string, int> compare;
        string ordStr;
        int indx = 0;

        for (int i = 0; i < strs.size(); ++i) {
            ordStr = strs[i];
            std::sort(ordStr.begin(), ordStr.end());
            if (compare.count(ordStr)) {
                temp = sublist[compare[ordStr]];
                temp.push_back(strs[i]);
                sublist.insert(sublist.begin() + compare[ordStr], temp);
                sublist.erase(sublist.begin() + compare[ordStr] + 1, sublist.begin() + compare[ordStr] + 2);
                --indx;
                temp.clear();
            } else {
                temp.push_back(strs[i]);
                sublist.push_back(temp);
                compare[ordStr] = indx;
                temp.clear();
            }
            ++indx;
        }

        return sublist;
    }
};
