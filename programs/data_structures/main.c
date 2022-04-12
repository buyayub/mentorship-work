#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "binary_search_tree.h"

int main()
{
	struct Stack *stack = stack_create(10);
	_Bool is_empty = stack_empty(stack);

	// Testing Stack
	printf("Stack empty: %d \n", is_empty);
	printf("Stack push: %d\n", stack_push(stack, 10));
	stack_print(stack);
	printf("Stack push: %d\n", stack_push(stack, 5));
	stack_print(stack);
	printf("Stack pop: %d\n", stack_pop(stack));
	stack_print(stack);

	// Testing Queue
	struct Queue *queue = queue_create(10);
	printf("Enqueue: %d\n", queue_enqueue(queue,5));
	queue_print(queue);
	printf("Enqueue: %d\n", queue_enqueue(queue,7));
	queue_print(queue);
	printf("Enqueue: %d\n", queue_enqueue(queue,4));
	queue_print(queue);
	printf("Enqueue: %d\n", queue_enqueue(queue,9));
	queue_print(queue);
	printf("Dequeue: %d\n", queue_dequeue(queue));
	queue_print(queue);
	printf("Dequeue: %d\n", queue_dequeue(queue));
	queue_print(queue);
	printf("Dequeue: %d\n", queue_dequeue(queue));
	queue_print(queue);


	// Testing Binary Search Tree
	struct Node *root = bst_createNode(6);
	printf("Created Tree: ");
	bst_inorderTreeWalk(root);
	printf("\n");
	
	struct Node *node0 = bst_createNode(3);
	struct Node *node1 = bst_createNode(8);
	struct Node *node2 = bst_createNode(2);
	struct Node *node3 = bst_createNode(9);
	struct Node *node4 = bst_createNode(4);

	bst_insert(root, node0);
	bst_insert(root, node1);
	bst_insert(root, node2);
	bst_insert(root, node3);
	bst_insert(root, node4);

	printf("Inserted Tree: ");
	bst_inorderTreeWalk(root);
	
	printf("\nSearch (9): %d", bst_search(root, 9)->key);
	printf("\nIterative Search (8): %d", bst_searchIterative(root, 8) -> key);
	printf("\nMinimum: %d", bst_minimum(root)->key);
	printf("\nMaximum: %d", bst_maximum(root)->key);

	bst_delete(root, node1);
	printf("\nDeleted Tree (8): ");
	bst_inorderTreeWalk(root);
	printf("\n");
	
	return 0;
}
