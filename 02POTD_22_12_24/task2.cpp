// Task 2 ( Find the minimum operations to make each number divisible by 3 )

//https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/solutions/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count =0;
        for(auto i: nums){
            if( i%3 == 0)
                continue;
            else
                count++;
        }
        return count;
    }
};

// Time Complexity O(n)
// Space Complexity O(1)