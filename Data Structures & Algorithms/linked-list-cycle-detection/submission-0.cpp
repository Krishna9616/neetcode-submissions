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
    bool hasCycle(ListNode* head) {
        ListNode* curr = head;
        unordered_set<ListNode*> st;
        while (curr) {
            if(!st.count(curr)){
                st.insert(curr);
                curr = curr->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
