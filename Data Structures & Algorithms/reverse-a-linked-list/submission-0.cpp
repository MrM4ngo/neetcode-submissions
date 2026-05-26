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

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        int x = 0;
        ListNode* temp = head;

        while ((temp -> next) != (nullptr)){
            temp = temp->next;
            x++;
        }

        x = x-1;
        ListNode* newhead = temp;
        ListNode* rev = newhead;


        for (int i = x; i >= 0; i--){
            x = i;
            temp = head;
            while (x >= 0){
                temp = temp->next;
                // printf("X: %d\n",x);
                x--;
                
            }
            rev->next = temp;
            rev = rev->next;
            // printf("Val: %d\n", temp->val);
  
        }

        rev->next = head;
        rev = rev->next;
        rev->next = nullptr;
        return newhead;
        
    }
};
