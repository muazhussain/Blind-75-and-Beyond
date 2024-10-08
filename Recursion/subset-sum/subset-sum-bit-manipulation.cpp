// Problem link: https://www.geeksforgeeks.org/problems/subset-sums2234/1
// Time: O(2^n + 2^nLog2^n)
// Space: O(2^n)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> res;
        for(int i = 0; i < (1 << n); i++) {
        	int sum = 0, curr_idx = 0, temp = i;
        	while(temp) {
        		if(temp & 1) {
        			sum += arr[curr_idx];
        		}
        		temp >>= 1;
        		curr_idx++;
        	}
        	res.push_back(sum);
        }
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends