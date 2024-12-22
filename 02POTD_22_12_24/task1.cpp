// Task 1 ( Find the single number )
// https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i:nums){
            ans = ans^i;
        }
        return ans;
    }
};

// Time Complexity O(n)
// Space Complexity O(1)