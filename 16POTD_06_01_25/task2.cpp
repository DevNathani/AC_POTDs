// Task 2 Binary Search ( Loop & Recursive )
// https://leetcode.com/problems/binary-search/

int binarySearch(vector<int> &nums, int target, int low, int high)
{
    int ind = -1;
    int mid = (low + high) / 2;
    if (low <= high)
    {
        if (nums[mid] == target)
            ind = mid;
        else if (nums[mid] > target)
            ind = binarySearch(nums, target, low, mid - 1);
        else
            ind = binarySearch(nums, target, mid + 1, high);
    }
    return ind;
}

int search(vector<int> &nums, int target)
{

    // Loop Method
    int low = 0, high = nums.size() - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;

    // Recursive Method
    int low = 0, high = nums.size() - 1;
    int ind = binarySearch(nums, target, low, high);
    return ind;
}


// Time Complexity => O(logn)
// Space Complexity => O(1)