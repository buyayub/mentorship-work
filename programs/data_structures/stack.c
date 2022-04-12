#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


// O(1), don't know about malloc
struct Stack* stack_create(int size)
{
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->max = size;
	stack->elements = (int*)malloc(size * sizeof(int));
	stack->top = -1;
	return stack;
}

// O(1)
_Bool stack_empty(struct Stack *stack)
{
	return stack->top == -1;
}

// O(1)
int stack_push(struct Stack *stack, int value)
{
	stack->top++;
	stack->elements[stack->top] = value;
	return stack->elements[stack->top];
}

// O(1)
int stack_pop(struct Stack *stack)
{
	if (stack_empty(stack))
	{
		printf("Empty stack");
		return 0;
	}
	else
	{
		int popValue = stack->elements[stack->top];
		stack->top--;
		return popValue;
	}
}

// O(n)
void stack_print(struct Stack *stack)
{
	for (int i = 0; i <= stack->top; i++)
	{
		printf("%d ", stack->elements[i]);
	}
	printf("\n");
}
