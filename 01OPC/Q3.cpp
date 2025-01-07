#include <bits/stdc++.h>

#define ll long long

using namespace std;

int solve(string s, int n)
{
    int minJump = 0;
    int i = 0, j = -1;
    while (i < n)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            int jump = i - j;
            j = i;
            minJump = max(minJump, jump);            
        }
        i++;
       
    }
    i--;
    if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
    {
        int jump = n - j;
        minJump = max(minJump, jump);
    }

    return minJump;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases;
    cin >> testcases;
    while (testcases)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ans = solve(s, n);
        cout << ans << endl;
        testcases--;
    }
    return 0;
}