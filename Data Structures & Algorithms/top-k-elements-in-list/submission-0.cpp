class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> um;

        for (int i = 0; i < nums.size(); ++i) {
            um[nums[i]]++;
        }
        vector<std::pair<int, int>> vec(um.begin(), um.end());

        std::sort(vec.begin(), vec.end(), [] (const auto& a, const auto& b){
            return a.second > b.second;
        });

        for (int i = 0; i < k; ++i) {
            result.push_back(vec[i].first);
        }

        return result;
    }
};
