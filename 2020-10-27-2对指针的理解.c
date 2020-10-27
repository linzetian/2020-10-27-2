//对指针的理解
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//arr数组名为首元素的地址
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d \n",arr[j]);
	}
	return 0;
}