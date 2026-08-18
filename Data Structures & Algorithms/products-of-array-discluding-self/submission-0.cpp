class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), 1);
        vector<int> post(nums.size(), 1);

        for (int i = 1; i < nums.size(); ++i) {
            pre[i] = nums[i - 1] * pre[i - 1];
        }

        for (int i = nums.size() - 1; i > 0; --i) {
            post[i - 1] = nums[i] * post[i];
        }

        for (int i = 0; i < nums.size(); ++i) {
            pre[i] *= post[i];
        }

        return pre;


    }
};
