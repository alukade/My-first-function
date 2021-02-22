#include<stdio.h>

void print_C();

void print_C()//函数的声明,即对若干代码段的封装
{
	printf("######\n");
	printf("##    ##\n");
	printf("##       \n");
	printf("##       \n");
	printf("##    ##\n");
    printf("######\n");
}
int main()
{
	print_C();
	printf("\n");
	print_C();
	printf("\n");
    print_C();


	return 0;
}