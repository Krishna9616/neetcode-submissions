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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 && temp2){
            if(temp1->val < temp2->val){
                ListNode* node = new ListNode(temp1->val);
                dummy->next = node;
                dummy = node;
                temp1 = temp1->next;
            }
            else{
                ListNode* node = new ListNode(temp2->val);
                dummy->next = node;
                dummy = node;
                temp2 = temp2->next;
            }
        }
        while(temp1){
            ListNode* node = new ListNode(temp1->val);
            dummy->next = node;
            dummy = node;
            temp1 = temp1->next;
        }

        while(temp2){
            ListNode* node = new ListNode(temp2->val);
            dummy->next = node;
            dummy = node;
            temp2 = temp2->next;
        }
        return head->next;
    }
};
