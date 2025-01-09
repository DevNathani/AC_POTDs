// Task 2 Find Minimum Element
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

int findMin(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;
    int mid;
    if (!high)
        return nums[0];
    int ans = INT_MAX;
    while (low <= high)
    {
        mid = (low + high) / 2;
        // left sorted
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        // right sorted
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

// Time Complexity O(logn)
// Space Complexity O(1)