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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *temp;
      ListNode *output = (ListNode*)malloc(sizeof(ListNode));
      output->next  = NULL;
      ListNode *p;
      ListNode *q;
      int i = 1, j = 1;
      int sum_a = 0, sum_b = 0;
      temp = l1;
      while (temp != NULL) {
        sum_a = sum_a + i * temp->val;
        i = i * 10;
        temp = temp->next;
      }
      temp = l2;
      while (temp != NULL) {
        sum_b = sum_b + j * temp->val;
        j = j * 10;
        temp = temp->next;
      }
      int sum_c = sum_a + sum_b;
      output->val = sum_c % 10;
      q = output;
      do {
        p = (ListNode*)malloc(sizeof(ListNode));
        sum_c = sum_c / 10;
        p->val = sum_c % 10;
        p->next = NULL;
        q->next = p;
        q = p;
      } while (sum_c / 10);

      return output;
    }
};
