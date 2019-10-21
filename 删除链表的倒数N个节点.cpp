
  //Definition for singly-linked list.
#include<iostream>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
using namespace std;
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* p = head;
		ListNode* pre = head;
		int i = 0;
		if (head->next == NULL)
			return NULL;
		while (i <= n)
		{
			if (p == NULL)
				break;
			else
				p = p->next;
			i++;
		}
		if (i == n)
		{
			head = head->next;
			return head;
		}
		else {
			while (p)
			{
				p = p->next;
				pre = pre->next;
			}
			ListNode * r = pre->next;
			pre->next = r->next;
			return head;
		}
	}
};