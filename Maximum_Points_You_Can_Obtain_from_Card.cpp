class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int left = 0, right = 0; 
        for(int i = 0;i < k ;i++){
            left += nums[i];
        }
        int ans = left;
        int n = nums.size();
        for(int i = 0; i < k;i++){
            left -= nums[k-i-1];
            right += nums[n-i-1];
            ans = max(ans,right+left);
        }
        return ans;
    }
};

// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/