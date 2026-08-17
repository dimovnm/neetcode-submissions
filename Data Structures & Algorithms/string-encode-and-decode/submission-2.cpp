class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for (auto& word: strs) {
            str.append(to_string(word.size()));
            str.push_back('#');
            str.append(word);
        };

        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            while (s[j] != '#') {
                ++j;
            }

            int len = stoi(s.substr(i,j-i));
            strs.push_back(s.substr(j+1, len));

            i = j + len + 1;
        }
        return strs;
    }
};
