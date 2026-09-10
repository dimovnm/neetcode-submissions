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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head ->next == nullptr) {return head;}

        ListNode *cur = head;
        head = head->next;
        cur->next = nullptr;

        while (head->next != nullptr) {
            ListNode* temp = head->next;
            head->next = cur;
            cur = head;
            head = temp;
        }
        head->next = cur;

        return head;

    }
};
