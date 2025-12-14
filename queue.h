#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#define defdate int 
typedef struct listnode {
	defdate val;
	struct listnode* next;
}list;
//一顺序表形式实现
typedef struct Queue {
	list* head;
	list* tail;
}qnode;
//初始化
void  qnodeinit(qnode*head);
//入队
void qnodepush(qnode* head, defdate x);
//出队（并意味着获取出队的数据。应返回数据类型）
void qnodepop(qnode* head);
//判空
bool qnodeempty(qnode* head);
//销毁
void qnodedestroy(qnode* head);
//获取队列长度
int qnodesize(qnode* head);
//打印
void qnodeprint(qnode* head);
