// Problem link: https://leetcode.com/problems/middle-of-the-linked-list/
// Time: O(n)
// Space: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
		ListNode *temp = head;
		int cnt = 0;
		while(temp != NULL) {
			cnt++;
			temp = temp->next;
		}        
		int middle = (cnt / 2) + 1;
		temp = head;
		while(--middle) {
			temp = temp->next;
		}
		return temp;
    }
};