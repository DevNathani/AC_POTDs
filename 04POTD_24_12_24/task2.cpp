// Task 2 ( Pangram )
// https://codeforces.com/problemset/problem/520/A 

#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(int size,string str)
{
    set<char> st;
    for(int i=0;i<size;i++){
        if(isupper(str[i])){
            int ind = (int)str[i] - 64;
            st.insert(ind);
        }
        if(islower(str[i])){
            int ind = (int)str[i] - 96;
            st.insert(ind);
        }
    }
    if(st.size() == 26)
        cout<<"YES";
    else  cout<<"NO";
}


signed main()
{
    // To reduce the time taken to input and output from standard input output
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); // 
   cout.tie(NULL);
   int size;
    string str;
    cin>>size;
    cin>>str;
         
   solve(size,str);
   return 0;
}

// Time Complexity O(n)
// Space Complexity O(1)


