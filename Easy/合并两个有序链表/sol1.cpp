// 双指针解法
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // // merge func
        // if(list1==nullptr) {
        //     return list2;
        // }
        // if(list2==nullptr) {
        //     return list1;
        // }
        // ListNode* List_Tail=list1;
        // while(List_Tail->next!=nullptr) {
        //     List_Tail=List_Tail->next;
        // }
        // List_Tail->next = list2;
        // return list1;
        ListNode* dummy = new ListNode(0); // creat dummy head
        ListNode* tail = dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) { // compare
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // move next
        }
        if (list1) tail->next = list1;
        if (list2) tail->next = list2;

        ListNode* final = dummy->next; // Get the final list
        delete dummy;  // delete head
        return final;
    }
};