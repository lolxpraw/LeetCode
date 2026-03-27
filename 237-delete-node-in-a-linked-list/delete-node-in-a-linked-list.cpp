/*
    De khong code head, chi co node
    Cach lam: Bien node cua phia sau thanh node cua phia truoc
*/
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};