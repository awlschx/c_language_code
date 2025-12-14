#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#define undefdate char*
typedef struct stdlist {
	undefdate date;
	 struct stdlist* next;
}sl;
struct ListNode {
	int val;
	struct ListNode* next;

};
//形参的改变不改变实参大小，要传一级指针的地址，用二级指针接收（因为你要让指针next不断指向其他的地址）
void slpushback(sl**pphead,undefdate x);
//初始化
void slinit(sl* phead);
void sldestroyed(sl** phead);
void slprintf(sl* phead);
//头增
void slpushhead(sl** pphead, undefdate x);
sl* slfind(sl* phead, undefdate x);
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);
void sleraser(sl** pphead, sl* pos);