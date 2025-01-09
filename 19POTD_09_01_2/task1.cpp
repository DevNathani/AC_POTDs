// Task 1 Find Peak Element
// https://leetcode.com/problems/find-peak-element/

int findPeakElement(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;
    int mid;
    if (!high)
        return 0;
    if (nums[0] > nums[1])
        return 0;
    if (nums[high] > nums[high - 1])
        return high;
    low++;
    high--;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
            return mid;
        else if (nums[mid] < nums[mid - 1])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// Time Complexity O(logn)
// Space Complexity O(1)