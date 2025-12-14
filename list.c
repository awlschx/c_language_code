#include"list.h"
//初始化
void slinit(sl*phead) {
	phead = NULL;
}
//尾增
void slpushback(sl** pphead, undefdate x) {
	//要增加就要给他新增空间分配空间
	sl* newnode = (sl*)malloc(sizeof(sl));
	if (newnode == NULL) {
		exit(-1);
	}
	newnode->date = x;
	newnode->next = NULL;
	if (*pphead == NULL) {
		*pphead = newnode;


	}
	else {
		sl* tail = *pphead;
		while (tail->next!= NULL) {
			tail = tail->next;
		}
		//走到这里说明找到了空指针
		tail->next = newnode;
	}
	
}
//销毁也要传二级指针，因为要一个个销毁，如果只是便利不修改指针指向就只用传一级指针，但如果你要改变一级指针指向，即改变头指针的指向，例如让她指向newnode就需要传一级指针地址，用二级指针接收
void sldestroyed(sl** pphead) {
	sl* cur = *pphead;
	//包含了头指针是不是空的情况，先将->next指针存起来，然后将当前指针释放，在将存起来的->next指针再度付给cur
	while (cur!= NULL) {
		sl* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
	
}
void slprintf(sl* phead) {
	sl* cur = phead;
	while (cur!= NULL) {
		printf("%s", cur->date);
		if (cur->next != NULL) {
			printf("->");
		}
		cur = cur->next;
	}
	printf("->NULL\n");
}
//头增
void slpushhead(sl** pphead, undefdate x) {
	//分配新空间放要增加的数
	sl* newnode = (sl*)malloc(sizeof(sl));
	newnode->date = x;
	if (*pphead != NULL) {
		newnode->next = *pphead;
	*pphead = newnode;

	}
	else {
		*pphead = newnode;
		newnode->next = NULL;
	}
	
}
//void sldestroyed(sl** pphead) {
//	sl* cur = *pphead;
//	while (cur->next != NULL) {
//		sl* next = cur;
//		cur = cur->next;
//		free(next);
//		
//	}
//	free(cur);
//	*pphead = NULL;
//
//}
sl* slfind(sl* phead, undefdate x) {
	sl* next = phead;
	
while (next!= NULL) {
		if (next->date == x) {
			
			return next;
		}
		next = next->next;
	}
	
		return NULL;
	
	
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	head->val = -1;
	head->next = NULL;
	struct ListNode* cur = head;
	struct ListNode* l1 = NULL;
	struct ListNode* l2 = NULL;
	l1 = list1;
	l2 = list2;
	while (l1 != NULL && l2 != NULL) {
		if (l1->val <= l2->val) {
			cur->next = l1;
			l1 = l1->next;
		}
		else {
			cur->next = l2;
			l2 = l2->next;
		}
		cur = cur->next;
	}
	cur->next = (l1 == NULL) ? l2 : l1;
	return head->next;
}
void sleraser(sl** pphead, sl* pos) {
	assert(*pphead != NULL);
	if (pos = *pphead) {
		*pphead = pos->next;
		free(pos);
		pos = NULL;
	}
	else {
		sl* pre = *pphead;
		while (pre->next != pos) {
			pre = pre->next;
		}
		pre->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
//int main() {
//	struct sl* chx = NULL;
//	int x = 5;
//	slpushback(&chx, 5);
//	slpushback(&chx, 2);
//	slpushback(&chx, 0);
//	slpushback(&chx, 1);
//	slpushback(&chx, 3);
//	slpushback(&chx, 1);
//	slpushback(&chx, 4);
//	slpushhead(&chx, 1);
//	slprintf(chx);
//	sldestroyed(&chx);
//	
//	return 0;
//}