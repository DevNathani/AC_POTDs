// Task 1 ( Score of a String )
// https://leetcode.com/problems/score-of-a-string/



class Solution {
public:
    int scoreOfString(string s) {
        int size = s.size();int score = 0;
        for(int i = 0; i < size -1; i++ ){
            int sum = labs( (int)s[i] - (int)s[i+1] );
            score += sum;
        }
        return score;
    }
};