class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=nullptr;
        ListNode* front=nullptr;
        while(temp!=nullptr){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;

        }
        return prev;
        
    }
};