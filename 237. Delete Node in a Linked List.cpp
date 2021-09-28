class Solution {
public:
    void deleteNode(ListNode* del) {
       ListNode* New = del->next;
       del->val = New->val;
       del->next = New->next;
        delete New;
        
    }
};
