#include <stdio.h>

void main()
{
	int a[] = {44,2,41,4,6,7,-1};
	
	
	int *p = a;
	while(*p != -1) {
		printf("%d\n", *p++);
	}
//	int *p = a;
//	int *p1 = &a[5];
//	printf("p   =%p\n", p);
//	printf("p1 =%p\n", p1);	
//	printf("p1-p=%d\n", p1 - p);
//	char c[] = {'1','3','d','d','r','f','6'};
//	int *q = c;
//	int *q1 = &c[5];
//	printf("q   =%p\n", q);
//	printf("q1 =%p\n", q1);
//	printf("q1-1=%d\n", q1 - q);
}


