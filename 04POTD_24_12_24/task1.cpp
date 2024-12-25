// Task 1 ( Dutch Flag Algorithm )
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, p = 0,end = nums.size()-1;
        while(p<=end){
            if(nums[p] == 0){
                swap(nums[p],nums[start]);
                p++;
                start++;
            }
            else if(nums[p] == 1)
                p++;
            else{
                swap(nums[p],nums[end]);
                end--;
            }
        }

    }
};

// Time Complexity O(n)
// Space Complexity O(1)