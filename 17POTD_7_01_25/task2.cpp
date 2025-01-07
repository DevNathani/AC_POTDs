// Task 2 Search Insert Position
// https://leetcode.com/problems/search-insert-position/

int searchInsert(vector<int> &nums, int target)
{
    int n = nums.size();
    if (nums[0] >= target)
        return 0;
    if (nums[n - 1] < target)
        return n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

// Time Complexity O(logn)
// Space Complexity O(1)