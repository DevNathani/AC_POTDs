// Task 2 Long Long
// https://codeforces.com/contest/1843/problem/B

// --------------------------- Failed at testcase 4 --------------------------------

#include <bits/stdc++.h>

#define ll long long

using namespace std;

pair<ll, int> solve(vector<int> &arr, int n)
{
    pair<ll, int> ans;
    int i = 0;
    ll sum = 0;
    int flag = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
         sum += abs(arr[i]);
        if (arr[i] < 0)
        {
            if (!flag)
            {
                count++;
                flag = 1;
            }
        }
        else if(arr[i]>0) flag=0;
    }

    ans.first = sum;
    ans.second = count;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        pair<ll, int> result = solve(arr, n);
        cout << result.first << " " << result.second << "\n";
    }

    return 0;
}