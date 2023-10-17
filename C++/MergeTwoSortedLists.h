#ifndef MERGETWOSORTEDLISTS_H
#define MERGETWOSORTEDLISTS_H

// 21. Merge Two Sorted Links
// Easy

// Solution 1
/*
 * The only problem is that the nodes
 * of the original lists are not used
 * in the resulting list (although it
 * may be correct, because the
 * function should not change the
 * original data).
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==nullptr){
        return list2;
    }
    if(list2==nullptr){
        return list1;
    }
    ListNode* head;
    ListNode* tmp;
    /*
     * First we set the head of the list
     * and the temp variable
     */
    if(list1->val<list2->val){
        tmp=head=new ListNode(list1->val);
        list1=list1->next;
    }else{
        tmp=head=new ListNode(list2->val);
        list2=list2->next;
    }
    /*
     *  Passing through both lists until
     * one of them ends
     */
    while(list1!=nullptr && list2!=nullptr){
        if(list1->val<list2->val){
            tmp->next=new ListNode(list1->val);
            list1=list1->next;
        }else{
            tmp->next=new ListNode(list2->val);
            list2=list2->next;
        }
        tmp=tmp->next;
    }
    /*
     * Passing through one of the remaining
     * lists and adding it to the resulting
     * list
     */
    while(list1!=nullptr){
        tmp->next=new ListNode(list1->val);
        list1=list1->next;
        tmp=tmp->next;
    }
    while(list2!=nullptr){
        tmp->next=new ListNode(list2->val);
        list2=list2->next;
        tmp=tmp->next;
    }
    return head;
}
#endif // MERGETWOSORTEDLISTS_H
