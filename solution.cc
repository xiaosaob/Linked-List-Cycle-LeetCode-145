// Given a linked list, determine if it has a cycle in it.

// Follow up:
// Can you solve it without using extra space?

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
    bool hasCycle(ListNode *head) {
        ListNode *first = head, *second = head;
        while(second) {
            second = second->next;
            if(second)
                second = second->next;
            first = first->next;
            if(first && first == second)
                return true;
        }
        return false;
    }
};
