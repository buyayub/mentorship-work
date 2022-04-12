//QUEUE 
#ifndef QUEUE_H_
#define QUEUE_H_ 

struct Queue
{
	int head;
	int tail;
	int *elements;	
	int max;
};

struct Queue* queue_create(int size);
int queue_enqueue(struct Queue *queue, int value);
int queue_dequeue(struct Queue *queue);
void queue_print(struct Queue *queue);
#endif
