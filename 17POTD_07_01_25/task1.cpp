// Arranging Coins
// https://leetcode.com/problems/arranging-coins/

int arrangeCoins(int n)
{
    long low = 1;
    long high = n;
    long mid;
    long ans;
    while (low <= high)
    {
        mid = (low + high) / 2;
        long sum = (mid * (mid + 1)) / 2;
        if (sum == n)
            return mid;
        else if (sum < n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return (int)ans;
}

// Time Complexity O(logn)
// Space Complexity O(1)