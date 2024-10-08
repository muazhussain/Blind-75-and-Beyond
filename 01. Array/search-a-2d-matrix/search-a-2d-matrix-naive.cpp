// Problem link: https://leetcode.com/problems/search-a-2d-matrix/
// Time: O(m * n)
// Space: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    	int m = matrix.size();
    	int n = matrix[0].size();
    	for(int i = 0; i < m; i++) {
    		for(int j = 0; j < n; j++) {
    			if(matrix[i][j] == target) {
    				return true;
    			}
    		}
    	}
    	return false;
    }
};