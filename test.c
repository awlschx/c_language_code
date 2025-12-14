#include"list.h"
//int main() {
//	struct sl* chx = NULL;
//	int x = 5;
//	void pushback(chx,x);
//	void destroyed(chx);
//	return 0;
//}
//struct ListNode {
//	int val;
//	struct ListNode* next;
//
//};
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head->val = -1;
//	head->next = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* l1 = NULL;
//	struct ListNode* l2 = NULL;
//	l1 = list1;
//	l1 = list2;
//	while (l1 != NULL && l2 != NULL) {
//		if (l1->val <= l2->val) {
//			cur->next = l1;
//			l1 = l1->next;
//		}
//		else {
//			cur->next = l2;
//			l2 = l2->next;
//		}
//		cur = cur->next;
//	}
//	cur->next = (l1 == NULL) ? l2 : l1;
//	return head->next;
//}
int main() {
	struct sl* chx = NULL;
	struct sl* chx2 = NULL;
	int x = 5;
	double y = 5.2;
	slpushback(&chx, "LOVE");
	slpushback(&chx, "YOU");
	slpushback(&chx, "FOREVER");
	/*slpushback(&chx, 'E');
	slpushback(&chx, 'Y');
	slpushback(&chx, 'O');
	slpushback(&chx, 'U');*/
	/*slpushback(&chx, 4);
	slpushhead(&chx, 1);*/
	/*sl* pos1 = NULL;
	int i = 0;
	pos1=slfind(chx, 1); 
	while (pos1 != NULL) {
		printf("第%d个节点%p->%d\n",++i, pos1, pos1->date);
		if (i == 3) {
			pos1->date = 30;
		}
		pos1=slfind(pos1->next, 1);
		
      
	}*/
	
	slprintf(chx);
	/*mergeTwoLists(chx, chx2);*/
	sldestroyed(&chx);
	/*sldestroyed(&chx2);*/

	return 0;
}