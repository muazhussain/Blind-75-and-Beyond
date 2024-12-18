// Problem link: https://leetcode.com/problems/maximum-width-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) {
        	return 0;
        }
        int res = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()) {
        	int size = (int) q.size();
        	int mmin = q.front().second;
        	int first, last;
        	for(int i = 0; i < size; i++) {
				int cur_id = q.front().second - mmin;
                TreeNode* node = q.front().first;
                q.pop();
                if(i == 0) {
                    first = cur_id;
                }
                if(i == size - 1) {
                    last = cur_id;
                }
                if(node->left != NULL) {
                    q.push({node->left, cur_id * 2 + 1});
                }
                if(node->right != NULL) {
                    q.push({node->right, cur_id * 2 + 2});
                }
        	}
            res = max(res, last - first + 1);
        }
        return res;
    }
};