#include <stdio.h>

int max(int[], int);

struct man{
	int age;
	char name[20];
} wangzz;

void main()
{
	//int arr[10] = {1,2,3,4,55,6,7,8,9,11}; 
	//int a = max(arr, sizeof(arr)/sizeof(arr[0]));
	//printf("%d\n", a);
	
//	wangzz.age = 18;
//	*wangzz.name = 'a';
//	struct man *p;
//	p = &wangzz;
	
	
	int len;
	scanf("%d", &len);
	int a[len];
	printf("%d\n", sizeof(a)/sizeof(a[0]));
	
	
//	char a = 'a';
	//printf("%x\n", &a);
	//printf("%p\n", &a);
}

int max(int arr[],int size)
{
	int i;
	int max=0;
	for(i=0; i<size;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}
