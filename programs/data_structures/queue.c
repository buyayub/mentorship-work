#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// O(1), don't know about malloc
struct Queue* queue_create(int size)
{
	struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue -> max = size;
	queue -> head = 0;
	queue -> tail = 0;
	queue -> elements = (int*)malloc(size * sizeof(int));
	return queue;	
};

// O(1)
int queue_enqueue(struct Queue *queue, int value)
{
	queue -> elements[queue -> tail] = value;
	int enValue = queue->elements[queue -> tail];
	queue -> tail = (++queue -> tail) % queue->max;
	return enValue;
}

// O(1)
int queue_dequeue(struct Queue *queue)
{
	if ( queue -> head != queue -> tail)
	{
		int value = queue -> elements[ queue -> head];
		queue -> head = (++queue-> head) % queue -> max;
		return value;
	}
	else 
	{
		printf("Empty queue.\n");	
		return 0;
	}
}

// O(n)
void queue_print(struct Queue *queue)
{
	for (int i = queue -> head; i < queue -> tail; i++)
	{
		printf("%d ", queue -> elements[i]);
	}
	printf("\n");
}
