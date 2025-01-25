/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head)
 {
    if(head == NULL)
    return NULL;
    struct ListNode* prev = (struct ListNode* )malloc (sizeof(struct ListNode));
    prev -> val=0;
    prev -> next= head;
    struct ListNode* one= prev;
    struct ListNode* two= head;
    while (two !=NULL && two->next!=NULL)
    {
        one = one->next;
        two = two->next->next;
    }
    struct ListNode* temp=one->next;
    one->next=one->next->next;
    struct ListNode* new=prev->next;
    return new;
}