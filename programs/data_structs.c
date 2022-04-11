#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// STACK

struct Stack
{
	int top;
	int *elements;
	int max;	
};

// O(1), don't know about malloc
struct Stack* createStack(int size)
{
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->max = size;
	stack->elements = (int*)malloc(size * sizeof(int));
	stack->top = -1;
	return stack;
}

// O(1)
bool stackEmpty(struct Stack *stack)
{
	return stack->top == -1;
}

// O(1)
int stackPush(struct Stack *stack, int value)
{
	stack->top++;
	stack->elements[stack->top] = value;
	return stack->elements[stack->top];
}

// O(1)
int stackPop(struct Stack *stack)
{
	if (stackEmpty(stack))
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
void stackPrint(struct Stack *stack)
{
	for (int i = 0; i <= stack->top; i++)
	{
		printf("%d ", stack->elements[i]);
	}
	printf("\n");
}

// QUEUE

struct Queue
{
	int head;
	int tail;
	int *elements;	
	int max;
};

// O(1), don't know about malloc
struct Queue* createQueue(int size)
{
	struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->max = size;
	queue->head = 0;
	queue->tail = 0;
	queue->elements = (int*)malloc(size * sizeof(int));
	return queue;	
};

// O(1)
int enqueue(struct Queue *queue, int value)
{
	queue->elements[queue->tail] = value;
	int enValue = queue->elements[queue->tail];
	queue->tail = (++queue->tail) % queue->max;
	return enValue;
}

// O(1)
int dequeue(struct Queue *queue)
{
	if (queue->head != queue->tail)
	{
		int value = queue->elements[queue->head];
		queue-> head = (++queue->head) % queue->max;
		return value;
	}
	else 
	{
		printf("Empty queue.\n");	
		return 0;
	}
}

// O(n)
void printQueue(struct Queue *queue)
{
	for (int i = queue->head; i < queue->tail; i++)
	{
		printf("%d ", queue->elements[i]);
	}
	printf("\n");
}

// LINKED LIST

struct listElement
{
	struct listElement *next; 
	int key;
};

// O(1)
struct listElement* createElement(int value)
{
	struct listElement *element = (struct listElement*)malloc(sizeof(struct listElement));
	element->key = value;
	element->next = NULL;
	return element;
}

// O(n)
struct listElement *listSearch(struct listElement *head, int value)
{
	x = head;
	while (x != NULL && x->key != value)
	{
		x = x->next;
	}
	return x;
}


// O(n), since it's bound to worst case scenario
void listInsert(struct listElement *head, struct listElement *element)
{	
	if (head->next == NULL)
		head->next = element;
	else
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = element;
	}
}

// O(n), since it's bound to worst case scenario
void listDelete(struct listElement *head, struct listElement* element)
{
	if (head == element)
		free(head);
	else 
	{
		//find the element before the element to be deleted
		prev = head
		while (curr->next != element)
			prev = prev->next;

		//splice and delete
		after = element->next;
		prev->next = after;
		free(element);
	}
}

//BINARY SEARCH TREE
struct BSTNode 
{
	int key;			
	struct BSTNode *left;
	struct BSTNode *right;
	struct BSTNODE *parent;	
};

struct listElement* createBSTNode(int key)
{
	struct BSTNode *node = (struct BSTNode)malloc(sizeof(struct BSTNode));
	node->key = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return node;
}

void inorderTreeWalk(BSTNode *node)
{
	if (root != NULL)
	{
		inorderTreeWalk(node->left);
		printf("Tree-Walk: %d\n", node->key);
		inorderTreeWalk(node->right);
	}
}

void  treeSearch(BSTNode *node, int key)
{
	if (node == NULL || key == node->key)
		return node;
	if (k < node->key)
		return treeSearch(node->left, key);
	else
		return treeSearch(node->right, key);
}

void treeInsert(BSTNode *root, BSTNode *node)
{
	
}

int main()
{	
	struct Stack *stack = createStack(10);
	bool is_empty = stackEmpty(stack);

	printf("Stack empty: %d \n", is_empty);
	printf("Stack push: %d\n", stackPush(stack, 10));
	stackPrint(stack);
	printf("Stack push: %d\n", stackPush(stack, 5));
	stackPrint(stack);
	printf("Stack pop: %d\n", stackPop(stack));
	stackPrint(stack);

	struct Queue *queue = createQueue(10);
	printf("Enqueue: %d\n", enqueue(queue,5));
	printQueue(queue);
	printf("Enqueue: %d\n", enqueue(queue,7));
	printQueue(queue);
	printf("Enqueue: %d\n", enqueue(queue,4));
	printQueue(queue);
	printf("Enqueue: %d\n", enqueue(queue,9));
	printQueue(queue);
	printf("Dequeue: %d\n", dequeue(queue));
	printQueue(queue);
	printf("Dequeue: %d\n", dequeue(queue));
	printQueue(queue);
	printf("Dequeue: %d\n", dequeue(queue));
	printQueue(queue);

	return 0;
}


