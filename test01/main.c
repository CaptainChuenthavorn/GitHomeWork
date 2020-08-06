#include <stdio.h>
int main()
{
	int a, b;

	printf("This is sum program with 2 number\nEnter your first number : ");
	scanf_s("%d",&a);
	printf("Enter your second number :");
	scanf_s("%d", &b);
	printf("%d + %d = %d",a,b,a+b);
	
}
