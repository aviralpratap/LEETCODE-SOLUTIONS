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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* tempo=headB;
        while(temp!=tempo){
            if(temp!=NULL){
                temp=temp->next;
            }
            else{
                temp=headB;
            }

            if(tempo!=NULL){
                tempo=tempo->next;
            }
            else{
                tempo=headA;
            }

        }
        return temp;
        
    }
};