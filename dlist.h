#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#define defdate int 
typedef struct dlnode {
	int date;
	struct dlist* next;
	 struct dlist* pre;
}dlist;
//初始化
dlist* dlistinit();
//尾增
void dlistpushback(dlist* phead, defdate x);
//尾删
void dlistpopback(dlist* phead);
//打印
void dlistprint(dlist* phead);
//销毁空间
void dlistdestroy(dlist* phead);
//头增
void dlistpushfront(dlist* phead, defdate x);
//头删
void dlistpopfront(dlist* phead);
//查找
void dlistfind(dlist* phead, defdate x);
//插入
void dlistinsert(dlist* phead, int index, defdate x);