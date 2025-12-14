#include"queue.h"
//初始化
void qnodeinit(qnode*head) {
	assert(head);
	/*qnode* qn = (qnode*)malloc(sizeof(qnode));
	if (qn == NULL) {
		printf("false realloc\n");
		exit(-1);
	}*/
	head->head = NULL;
	head->tail = NULL;
	
}
//入队
void qnodepush(qnode* head, defdate x) {
	assert(head);list* newnode = (list*)malloc(sizeof(list));
		if (newnode == NULL) {
			printf("false realloc\n");
			exit(-1);
		}
	//先判断是否为空
	if (head->head == NULL && head->tail == NULL) {
				
		newnode->val = x;
		newnode->next = NULL;
		head->head = head->tail = newnode;
	}
	else {
		/*list* newnode = (list*)malloc(sizeof(list));
		if (newnode == NULL) {
			printf("false realloc\n");
			exit(-1);
		}*/
		newnode->val = x;
		newnode->next = NULL;
		head->tail->next = newnode;
		head->tail = newnode;
	}

}
////销毁
void qnodedestroy(qnode* head) {
	assert(head);
	list* cur = head->head;
	while (cur != NULL) {
		list* next = cur->next;
		free(cur);
		cur = next;
	}
	head->head = head->tail = NULL;
}
//打印
void qnodeprint(qnode* head) {
	assert(head);
	list* cur = head->head;
	while (cur != NULL) {
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}
//出队（并意味着获取出队的数据。应返回数据类型）
void qnodepop(qnode* head) {
	assert(head);
	assert(head->head != NULL);//空的时候不能再出列了
	defdate  result=head->head->val;
	list* next = head->head->next;
	free(head->head);
	head->head = next;
	//head和tail同时指向一个数据时，应作判断
	if (head->head == NULL) {
		head->tail = NULL;
	}
	printf("%d\n", result);
}
//判空
bool qnodeempty(qnode* head) {
	return head == NULL;       
}