/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!head) return NULL;
        ListNode *prev = head;
        ListNode *cur = head->next;
        while(cur){
            if(prev->val == cur->val){
                
                prev->next = cur->next;
                cur = cur->next;
            }
            else{
                cur = cur->next;
                prev = prev->next;
                
            }
            
            
            
        }
        return head;
        
    }
};
