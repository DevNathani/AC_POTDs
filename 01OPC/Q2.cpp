#include <bits/stdc++.h>

#define ll long long

using namespace std;

int solve(string s, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'N'){
            if(k) k--;
            else return count;
        }
        else count++;
    }
    return count;
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
        int n, k;
        string s;
        cin >> n;
        cin >> k;
        cin >> s;

        int read = solve(s,n,k);
        cout<<read<<endl;
    }

    return 0;
}