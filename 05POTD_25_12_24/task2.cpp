// Task 2 (New Year and Hurry)
// https://codeforces.com/problemset/problem/750/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int n,int k){
    // n is no. of problems
    // k is no. of minutes to reach party
    int left = 240 - k;
    int i=0,sum=0;
    while (i<n)
    {
        sum += (5*(i+1));
        if(sum>left)
            break;
        
        i++;
    }
    cout<<i;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n;
    cin>>k;
    solve(n,k);
    return 0;
}

// Time Complexity O(n)
// Space Complexity O(1)