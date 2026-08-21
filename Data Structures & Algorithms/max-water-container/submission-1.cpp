class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int l = 0, r = heights.size() - 1;

        while (l < r) {
            maxA = max(maxA, ((r - l) * min(heights[r], heights[l])));
            if (heights[l] < heights[r]) {
                ++l;
            } else if (heights[l] > heights[r]) {
                --r;
            } else {
                if (heights[l + 1] < heights[r - 1]) {
                    --r;
                } else if (heights[l + 1] > heights[r - 1]) {
                    ++l;
                } else {
                    ++l;
                }
            }
        }
        return maxA;
    }
};
