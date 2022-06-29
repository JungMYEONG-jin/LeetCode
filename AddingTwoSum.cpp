/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sub = 0;
	ListNode* head = new ListNode();
	ListNode* current = head;

	while (l1 != nullptr || l2 != nullptr) {
		current->next = new ListNode();
		current = current->next;
		int curSum = sub;

		if (l1 != nullptr) {
			curSum += l1->val;
		}

		if (l2 != nullptr) {
			curSum += l2->val;
		}

		if (curSum > 9) {
			curSum %= 10;
			sub = 1;
		}else{
            sub = 0;
        }

		current->val = curSum;
		l1 = l1 != nullptr ? l1->next : nullptr;
		l2 = l2 != nullptr ? l2->next : nullptr;

	}
	
	if (sub == 1) {
		current->next = new ListNode(sub);
	}
	return head->next;
    }
};
