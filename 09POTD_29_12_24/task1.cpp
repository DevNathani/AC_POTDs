// Task 1 Almost Prime
// https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int checkAlmostPrime(int n) {
    int count = 0;
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0) {
            n /= 2;
        }
    } 
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        count++;
    }
    return (count == 2) ? 1 : 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (checkAlmostPrime(i)) {
            count++;
        }
    }

    cout << count;
    return 0;
}

// Time Complexity O(sqrt(n)*logn)  ( logn for loop dividing continuously by 2 and then sqrt(n) * logn for loop running till sqrt(n) and inner loop for logn)
// Space Complexity O(1)