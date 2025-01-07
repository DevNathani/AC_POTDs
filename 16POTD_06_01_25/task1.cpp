// Task 1 Floor in Sorted Array
// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

int findFloor(vector<int> &nums, int k)
{
    int low = 0, high = nums.size() - 1;
    if (k < nums[0])
        return -1;
    if (k > nums[high])
        return (high - 1);
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == k)
            return mid;
        else if (nums[mid] > k)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return high;
    // Your code here
}

// Time Complexity O(logn)
// Space Complexity O(1)