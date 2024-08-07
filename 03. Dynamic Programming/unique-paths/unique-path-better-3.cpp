// Problem link: https://leetcode.com/problems/unique-paths/
// Time complexity: O(m * n)
// Space complexity: O(2 * n)

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(2, vector<int> (n, 1));
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                dp[i & 1][j] = dp[(i - 1) & 1][j] + dp[i & 1][j - 1];
            }
        }
        return dp[(m - 1) & 1][n - 1];
    }
};