// Problem link: https://leetcode.com/problems/pascals-triangle/
// Time: O(numRows ^ 3)
// Space: O(numRows ^ 2)

class Solution {
private:
	long long factorial(int n) {
		long long res = 1;
		for(int i = 1; i <= n; i++) {
			res *= i;
		}
		return res;
	}

	long long ncr(int n, int r) {
		long long res = 1;
		res *= factorial(n);
		res /= factorial(r);
		res /= factorial(n - r);
		return res;
	}

public:
    vector<vector<int>> generate(int numRows) {
    	vector<vector<int>> res;
    	for(int i = 1; i <= numRows; i++) {
    		vector<int> temp;
    		for(int j = 1; j <= i; j++) {
    			temp.push_back((int) ncr(i - 1, j - 1));
    		}
    		res.push_back(temp);
    	}
    	return res;
    }
};