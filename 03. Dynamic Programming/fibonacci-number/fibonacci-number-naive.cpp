// Problem link: https://leetcode.com/problems/fibonacci-number/
// Time: O(2^n)
// Space: O(n)

class Solution {
public:
    int fib(int n) {
        if(n <= 0) {
        	return 0;
        } else if(n == 1) {
        	return 1;
        }
        return fib(n - 1) + fib(n - 2);
    }
};