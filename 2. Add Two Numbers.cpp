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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode;
        ListNode* ptr = result;
        bool carry = 0;
        short digit1, digit2, sum;
        while (l1 || l2 || carry) {
            digit1 = l1 ? l1->val : 0;
            digit2 = l2 ? l2->val : 0;
            sum = carry + digit1 + digit2;
            ptr->val = sum % 10;
            carry = sum / 10;
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
            if (l1 || l2 || carry) {
                ptr->next = new ListNode;
                ptr = ptr->next;
            }
        }
        return result;
    }
};
