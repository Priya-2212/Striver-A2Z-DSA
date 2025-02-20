//https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

//first, brute force approach
//this involves data replacement 

class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        Node* temp = head;
      //three variables, cnt0, cnt1, cnt2 are used to store the occurence using temp 
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
       
        while(temp != NULL) {
            if(temp->data == 0) cnt0++;
            else if(temp->data == 1) cnt1++;
            else cnt2++;
            temp = temp->next;
        }
        //reset temp to head
        temp = head;
        //until temp is not null, check the value of cnt0 if present then in temp store its value and decrement 
        //the value of count , and move temp to temp.next
        while(temp != NULL) {
            if(cnt0) {
                temp->data=0;
                cnt0--;
            }
            else if(cnt1) {
                temp->data=1;
                cnt1--;
            }
            else {
                temp->data=2;
                cnt2--;
            }
                
            temp = temp->next;
        }
        return head;
    }
};

//time complexity: O(2N)
//space complexity: O(1)


//second, 
