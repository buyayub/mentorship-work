// STACK
#ifndef STACK_H_
#define STACK_H_

struct Stack
{
	int top;
	int *elements;
	int max;	
};

struct Stack* stack_create(int size);
_Bool stack_empty(struct Stack *stack);
int stack_push(struct Stack *stack, int value);
int stack_pop(struct Stack *stack);
void stack_print(struct Stack *stack);

#endif 
