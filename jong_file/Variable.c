#include <stdio.h>
void func_A(void);

int main()
{
	int aaa=10;
	printf("main() 함수의 aaa값 : %d \n", aaa);

	func_A();
	return 0;
}

void func_A()
{
	int aaa=20;
	int bbb=30;

	printf("func_A() 함수의 aaa값 : %d \n", aaa);
	printf("func_A() 함수의 bbb값 : %d \n", bbb);
	return;
}	

