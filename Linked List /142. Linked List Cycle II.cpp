//https://leetcode.com/problems/linked-list-cycle-ii/description/



//brute force


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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
       
        unordered_map<ListNode*, int> mp;
        
        while(temp!=NULL){
            if(mp.count(temp)!=0){
                return temp;
            }
        mp[temp] = 1;
        temp = temp->next;
    }
    return nullptr; 
    }
};

//tc ->
//sc ->


//optimal
