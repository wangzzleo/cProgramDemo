#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int number;
//	int* a;
//	int i;
//	printf("输入数量：");
//	scanf("%d", &number); 
//	//malloc申请的空间是以字节为单位的S
//	//malloc返回的是void* 需要类型转换为自己需要的类型 
//	a = (int*)malloc(number*sizeof(int));
//	for(i=0;i<number;i++) {
//		scanf("%d", &a[i]);
//	}
//	for(i=number-1; i>=0 ;i--) {
//		printf("%d ", a[i]);
//	}
	//释放空间 
//	free(a);




	//能申请到多少空间？ 
	void *p = 0;
	int cnt = 0;
	while((p = malloc(100 * 1024 * 1024))) {
		cnt++;
	}
	printf("分配了%d00M的空间", cnt);
	free(p);
	return 0;
	
}
