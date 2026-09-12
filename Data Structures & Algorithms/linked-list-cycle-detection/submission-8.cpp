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
        ListNode* dbl = head;
        while (dbl && dbl->next) {
            head = head->next;
            dbl = dbl->next->next;

            if (dbl != nullptr && head == dbl) {
                return true;
            }
        }
        return false;
    }
};
