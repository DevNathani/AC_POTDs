// Task 1 Search in 2D Matrix
// https://leetcode.com/problems/search-a-2d-matrix/

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int low = 0, high = rows - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (matrix[mid][0] == target)
            return true;
        else if (matrix[mid][0] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    int row = high;
    if (row < 0)
        return false;
    low = 0;
    high = cols - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (matrix[row][mid] == target)
            return true;
        else if (matrix[row][mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}

// Time Complexity O(log(rows*cols))
// Space Complexity O(1)