// Task 2 nth root of m
// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

int nthRoot(int n, int m)
{
    // Code here.
    // ans ^ n = m
    if (n == 1)
        return m;
    int low = 0, high = m;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        int val = pow(mid, n);
        if (val == m)
            return mid;
        else if (val < m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Time Complexity O(logm * logn) // BS & pow()
// Space Complexity O(1)