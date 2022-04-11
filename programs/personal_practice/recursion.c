//
// USES RECURSION PRACTICE PROBLEMS FROM w3resources.com
//

#include<stdio.h>

// 1. Write a program in C to print first 50 natural numbers using recursion.

void problem1(int x)
{
	printf("%d ", x);
	if (x < 50)
		problem1(++x);
}

// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.

int problem2(int n)
{
	int sum = n;
	if (n > 0)
		sum += problem2(--n);
	return sum;
}

// 3. 

int main()
{
	printf("Problem 1: \n");
	problem1(0);
	printf("\n");
	
	printf("Problem 2: \n");
	printf("%d", problem2(5));
	printf("\n");

	return 0;
}
