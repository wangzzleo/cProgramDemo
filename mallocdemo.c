#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int number;
//	int* a;
//	int i;
//	printf("����������");
//	scanf("%d", &number); 
//	//malloc����Ŀռ������ֽ�Ϊ��λ��S
//	//malloc���ص���void* ��Ҫ����ת��Ϊ�Լ���Ҫ������ 
//	a = (int*)malloc(number*sizeof(int));
//	for(i=0;i<number;i++) {
//		scanf("%d", &a[i]);
//	}
//	for(i=number-1; i>=0 ;i--) {
//		printf("%d ", a[i]);
//	}
	//�ͷſռ� 
//	free(a);




	//�����뵽���ٿռ䣿 
	void *p = 0;
	int cnt = 0;
	while((p = malloc(100 * 1024 * 1024))) {
		cnt++;
	}
	printf("������%d00M�Ŀռ�", cnt);
	free(p);
	return 0;
	
}
