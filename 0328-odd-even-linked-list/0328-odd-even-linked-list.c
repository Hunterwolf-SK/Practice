/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head)
{
    if(head == NULL || head-> next == NULL)
    {
        return head;
    }
    struct ListNode* odd =(struct ListNode* )malloc(sizeof(struct ListNode ));
    odd->val= 0;
    odd->next = NULL;
    struct ListNode* oddp=odd;
    struct ListNode* even = (struct ListNode* )malloc(sizeof(struct ListNode ));
    even->val=0;
    even->next=NULL;
    struct ListNode* evenp=even;
    int i=1;
    while(head!=NULL)
    {
        if(i%2==0)
        {
            evenp->next=head;
            evenp=evenp->next;
        }
        else
        {
            oddp->next=head;
            oddp=oddp->next;
        }
        head=head->next;
        i++;
    }
    evenp->next=NULL;
    oddp->next = even->next;
    struct ListNode* new=odd->next;
    return new;
    }
    
