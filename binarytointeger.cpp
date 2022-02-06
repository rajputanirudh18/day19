class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int decimal_value=0;
        while(head!=NULL)
        {
            decimal_value*=2;
            decimal_value+=head->val;
            head=head->next;
           
        }
        return decimal_value;
    }
};