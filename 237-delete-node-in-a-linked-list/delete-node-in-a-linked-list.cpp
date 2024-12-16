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
    void deleteNode(ListNode* node)
    {
        // 1->2->3->4->5
        
        //1->2->3->4

        
        ListNode* temp = node;
        ListNode* itr = temp->next;
        while(temp->next!=nullptr)
        {
            temp->val = itr->val;
            itr = itr->next;
            if(itr==nullptr){
                break;
            }      
            else {
            temp = temp->next;
            }
        }
        temp->next = nullptr;
        
        
    }
};