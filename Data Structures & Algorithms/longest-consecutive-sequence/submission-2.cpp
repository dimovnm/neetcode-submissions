class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> us(nums.begin(), nums.end());
        int opt1 = 1;
        int opt2 = 0;

        for (auto num: us) {
            if (!us.contains(num - 1)) {
                auto it = num;
                opt1 = 1;
                while (us.contains(++it)) {
                    ++opt1;
                }
                opt2 = std::max(opt1, opt2);
            }
        }

        return opt2;
    }
};
