/*Fibonacci*/

#include <stdio.h>

int fib(int n)
{
	if(n<=1)
		return 1;
	
	return fib(n-1) + fib(n-2);
}


int main(void)
{
	int n;
	int m;

	printf("Please enter n value: ");
	scanf("%d", &n);	

	m= fib(n);

	printf("\nFibonacci value: %d\n",m);

	return 0;
}