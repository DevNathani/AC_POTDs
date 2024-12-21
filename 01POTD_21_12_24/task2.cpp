// TASK 2 ( GCD of two numbers )
// https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(a<b){
            swap(a,b);
        }
        if( b == 0)
            return a;
        return gcd(b,a%b);
            
    }
};
