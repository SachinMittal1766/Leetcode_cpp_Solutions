class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* ptr = head;
        while(ptr!=NULL){
            length++;
            ptr = ptr->next;
        }
        length=length/2;
        while(length--){
            head=head->next;
        }
        return head;
       
    }
};
