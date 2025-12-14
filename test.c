#include"queue.h"
int main() {
	qnode qn;
	qnodeinit(&qn);
	qnodepush(&qn, 3);
	qnodepush(&qn, 4);
	qnodepush(&qn, 6);
	qnodepush(&qn, 7);
	qnodeprint(&qn);
	qnodepop(&qn);
	qnodepop(&qn);
	qnodepop(&qn);
	qnodedestroy(&qn);
 	return 0;
}