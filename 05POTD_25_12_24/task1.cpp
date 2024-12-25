// Task 1 ( Assign Cookies )
// https://leetcode.com/problems/assign-cookies/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        int count=0;
        int cookies = s.size();
        int children = g.size();
        while(i<children && j<cookies){
            if(g[i] <= s[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};

// Time Complexity O(nlogn)
// Space Complexity O(1)