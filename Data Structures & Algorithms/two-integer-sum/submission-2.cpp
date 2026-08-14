class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); ++i){
            int goal = target - nums[i];
            if (um.count(goal)) {
                return {um[goal], i};
            }
            um[nums[i]] = i;
        }
        return{};
    }
};
