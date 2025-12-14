#include "dlist.h"
//初始化,带哨兵位
dlist* dlistinit() {
	dlist* phead = (dlist*)malloc(sizeof(dlist));
	phead->next = phead;
	phead->pre = phead;
	return phead;
}
//尾增
void dlistpushback(dlist* phead, defdate x) {
	//断言
	assert(phead);
	//循环结构中头的pre就是尾，妙啊妙啊
	dlist* tail = phead->pre;
	//开辟空间
	dlist* newnode = (dlist*)malloc(sizeof(dlist));
	//赋值
	newnode->date = x;
	//插入
	
	tail->next = newnode;
	//后指向前
	newnode->pre = tail;
	//移动尾
	tail = newnode;
	//循环闭环
	tail->next = phead;
	phead->pre = tail;
}
//打印
void dlistprint(dlist* phead) {
	dlist* cur = phead->next;
	while (cur != phead) {
		printf("%d ", cur->date);
		cur = cur->next;
	}
	printf("\n");
}
//内存销毁
void dlistdestroy(dlist* phead) {
	dlist* cur = phead->next;
	while (cur->next != phead) {
		dlist* next = cur->next;
		free(cur);
		cur = next;
	}
}
//尾删
void dlistpopback(dlist* phead, defdate x) {
	assert(phead);
	//同时不能将自己给删除
	assert(phead->next != phead);
	//找到尾
	dlist* tail = phead->pre;
	dlist* ppre = tail->pre;
	//更正新尾
	phead->pre = tail->pre;
	//新尾指向头
	ppre->next = phead;
	//释放旧尾
	free(tail);
}
//头增
void dlistpushfront(dlist* phead, defdate x) {
	assert(phead);
	//分配空间
	dlist* newnode = (dlist*)malloc(sizeof(dlist));
	newnode->date = x;
	//先存下一个地址再改，否则找不到下一个地址
	dlist* next = phead->next;
	phead->next = newnode;
	newnode->pre = phead;
	newnode->next = next;
	next->pre = newnode;
}
//头删
void dlistpopfront(dlist* phead) {
	//如果是空链表就不能再删了
	assert(phead->next != phead);
	dlist* cur = phead->next;
	dlist* next = cur->next;
	//把cur删了
	phead->next = next;
	next->pre = phead;
	free(cur);
}
//查找
void dlistfind(dlist* phead, defdate x) {

}