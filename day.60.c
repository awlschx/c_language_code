//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
//int main() {
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2 && !(n == 0 && m == 0)) {
//		int pigeons =2*n-m/2;
//		int rabbit  = m/2-n;
//		if (pigeons < 0 || rabbit < 0) {
//			printf("Error\n");
//		}
//		else {
//			printf("%d %d\n",pigeons,rabbit);
//		}
//
//	}
//	return 0;
//}
#include "dlist.h"
int main() {
	dlist* dl = dlistinit();
	 dlistpushback(dl,5);
	 dlistpushback(dl, 2);
	 dlistpushback(dl, 0);
	 
	 dlistpushfront(dl, 4);
	 dlistpushfront(dl, 1);
	 dlistpushfront(dl, 3);
	 dlistpushfront(dl, 1);
	 dlistpushfront(dl, 1);
	 dlistprint(dl);
	
	 dlistpopfront(dl);
	 dlistpopfront(dl);
	 dlistpopfront(dl);
	 dlistpopfront(dl);
	 dlistpopfront(dl);
	 dlistpopfront(dl);
	 dlistpopfront(dl);
	 dlistprint(dl);
	/* dlistpopback(dl);
	 dlistprint(dl);*/
	 dlistdestroy(dl);
	return 0;

}