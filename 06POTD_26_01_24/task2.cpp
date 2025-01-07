
// ------------------ Incomplete --------------------

#include<bits/stdc++.h>


#define ll long long


using namespace std;


void solve(ll n){
    if(n>4){
        int quo = n/5;
        int exp = log2(n)/log2(5);
        cout<<(quo + exp -1);
    }
    else{
        cout<<0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    solve(n);
    return 0;
}