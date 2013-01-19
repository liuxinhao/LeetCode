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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *first = head;
        ListNode *second = head;
        ListNode *tmp;
        
        for(int i = 0; i < n; i++)
        {
            first = first->next;
        }
        while(first)
        {
            first = first->next;
            tmp = second;
            second = second->next;
        }
        if(second == head)
        {
            head = head->next;
        }
        else
        {
            tmp->next = second->next;
        }
        return head;
        
    }
};
